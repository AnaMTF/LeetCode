// There is a directed weighted graph that consists of n nodes numbered from 0 to n - 1. The edges of the graph are initially represented by the given array edges where edges[i] = [fromi, toi, edgeCosti] meaning that there is an edge from fromi to toi with the cost edgeCosti.

// Implement the Graph class:

// Graph(int n, int[][] edges) initializes the object with n nodes and the given edges.
// addEdge(int[] edge) adds an edge to the list of edges where edge = [from, to, edgeCost]. It is guaranteed that there is no edge between the two nodes before adding this one.
// int shortestPath(int node1, int node2) returns the minimum cost of a path from node1 to node2. If no path exists, return -1. The cost of a path is the sum of the costs of the edges in the path.

class Graph {
public:
    vector<vector<pair<int, int>>> adjList;
    Graph(int n, vector<vector<int>>& edges) {
        adjList.resize(n);
        for (auto& e: edges)
            adjList[e[0]].push_back(make_pair(e[1], e[2]));
    }

    void addEdge(vector<int> edge) {
        adjList[edge[0]].push_back(make_pair(edge[1], edge[2]));
    }

    int shortestPath(int node1, int node2) {
        int n = adjList.size();
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        vector<int> costForNode(n, INT_MAX);
        costForNode[node1] = 0;
        pq.push({0, node1});

        while (!pq.empty()) {
            int currCost = pq.top()[0];
            int currNode = pq.top()[1];
            pq.pop();

            if (currCost > costForNode[currNode]) {
                continue;
            }
            if (currNode == node2) {
                return currCost;
            }
            for (auto& neighbor : adjList[currNode]) {
                int neighborNode = neighbor.first;
                int cost = neighbor.second;
                int newCost = currCost + cost;

                if (newCost < costForNode[neighborNode]) {
                    costForNode[neighborNode] = newCost;
                    pq.push({newCost, neighborNode});
                }
            }
        }
        return -1;
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */
