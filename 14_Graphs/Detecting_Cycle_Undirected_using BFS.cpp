// GFG: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

// class Solution {
//   public:
//     bool bfs(int start, vector<vector<int>>& adj, vector<bool>& visited){
//         queue<int> q;
//         unordered_map<int, int> parent;
        
//         visited[start] = true;
//         q.push(start);
//         parent[start] = -1;   // there is not parent for that ele. 
        
//         while(!q.empty()){
//             int temp = q.front();
//             q.pop();
            
//             for(int neighbour : adj[temp]){
//                     if(!visited[neighbour]){
//                         visited[neighbour] = true;
//                         q.push(neighbour);
//                         parent[neighbour] = temp;
//                     }
//                     else if(parent[temp] != neighbour){
//                         // if neighbour is visited and not parent, then cycle exist
                        
//                         return true;
                        
//                     }
//                 }
//             }
//             return false;
//         }
//     bool isCycle(int V, vector<vector<int>>& edges) {
//         // Code here
//             vector<vector<int>> adj(V);
            
//             // here we create the adjacency list
            
//             for(auto edge : edges){
//                 int u = edge[0];
//                 int v = edge[1];
                
//                 adj[u].push_back(v);
//                 adj[v].push_back(u);
                
//                 // Visit all components
//             }
//             vector<bool> visited(V, false); // that no elem is being visited right now
            
//             for(int i = 0;i<V; i++){
//                 if(!visited[i]){
//                     // call BFS: 
//                     if(bfs(i, adj, visited)){
//                         return true;
//                     }
//                 }
//             }
            
//             return false;
        
//     }
// };