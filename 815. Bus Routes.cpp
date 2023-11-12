// You are given an array routes representing bus routes where routes[i] is a bus route that the ith bus repeats forever.

// For example, if routes[0] = [1, 5, 7], this means that the 0th bus travels in the sequence 1 -> 5 -> 7 -> 1 -> 5 -> 7 -> 1 -> ... forever.
// You will start at the bus stop source (You are not on any bus initially), and you want to go to the bus stop target. You can travel between bus stops by buses only.

// Return the least number of buses you must take to travel from source to target. Return -1 if it is not possible.
class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if (source == target) {
            return 0;
        }
        unordered_map<int, vector<int>> adjList;
        for (int route = 0; route < routes.size(); route++) {
            for (auto stop : routes[route]) {
                adjList[stop].push_back(route);
            }
        }

        queue<int> q;
        unordered_set<int> vis;
        for (auto route : adjList[source]){
            q.push(route);
            vis.insert(route);
        }

        int busCount = 1;
        while (q.size()) {
            int size = q.size();

            for (int i = 0; i < size; i++) {
                int route = q.front(); q.pop();
                for (auto stop: routes[route]) {
                    if (stop == target) {
                        return busCount;
                    }
                    for (auto nextRoute : adjList[stop]) {
                        if (!vis.count(nextRoute)) {
                            vis.insert(nextRoute);
                            q.push(nextRoute);
                        }
                    }
                }
            }
            busCount++;
        }
        return -1;
    }
};
