// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

// class Solution {
//   public:
//   void dfsHelper(int node, vector<vector<int>>& adj, vector<bool> &visited, vector<int>&result){
//       visited[node] = true;
//       result.push_back(node);
      
//       // visit all the unvisited nodes
//       for(int neighbour: adj[node]){
//           if(!visited[neighbour]){
//               dfsHelper(neighbour, adj, visited, result);
//           }
//       }
//   }
//     vector<int> dfs(vector<vector<int>>& adj) {
//         // Code here
//         int V = adj.size();
//         vector<bool> visited(V, false);
//         vector<int> result;
        
//         dfsHelper(0, adj, visited, result);
//         return result;
        
//     }
// };