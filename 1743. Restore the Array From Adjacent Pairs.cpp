// There is an integer array nums that consists of n unique elements, but you have forgotten it. However, you do remember every pair of adjacent elements in nums.

// You are given a 2D integer array adjacentPairs of size n - 1 where each adjacentPairs[i] = [ui, vi] indicates that the elements ui and vi are adjacent in nums.

// It is guaranteed that every adjacent pair of elements nums[i] and nums[i+1] will exist in adjacentPairs, either as [nums[i], nums[i+1]] or [nums[i+1], nums[i]]. The pairs can appear in any order.

// Return the original array nums. If there are multiple solutions, return any of them.

class Solution {
public:
    unordered_map<int, vector<int>> graph;
    
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        for (auto& edge : adjacentPairs) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
        int root = 0;
        for (auto& pair : graph) {
            if (pair.second.size() == 1) {
                root = pair.first;
                break;
            }
        }
        
        vector<int> ans;
        dfs(root, INT_MAX, ans);
        return ans;
    }
    
    void dfs(int node, int prev, vector<int>& ans) {
        ans.push_back(node);
        for (int neighbor : graph[node]) {
            if (neighbor != prev) {
                dfs(neighbor, node, ans);
            }
        }
    }
};
