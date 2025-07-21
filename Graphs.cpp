#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class Graph{
  public:
    // Building the graphs: 
  unordered_map<int, list<int>> adj;

  void addEdge(int u, int v, bool direction){
    // direction -> 0 -> undirected
    // direction -> 1 -> directed

    adj[u].push_back(v);
    
    // now checking if graph is directed or undirected 

    if(direction == 0){
      adj[v].push_back(u);
    }
  }

  void print(){
    // first creating the loop for the key: 
    // for(auto i: adj){
    //   cout<<i.first<<" -> ";

    //   // defining the loop for fetching the inner value which we defined as a LIST  
    //   for(auto j : i.second){
    //     cout<<j <<" , ";
    //   }
    //   cout<<endl;
    // }


    // if don't want ',' in the last
    for(auto i : adj) {
    cout << i.first << " -> ";
    for(auto it = i.second.begin(); it != i.second.end(); ++it){
        cout << *it;
        if (next(it) != i.second.end()) {
            cout << " , ";
        }
    }
    cout << endl;
}
  }
};


int main() {
  int n;
  cout<<"Enter the number of node: "<<endl;
  cin>>n;

  int m;
  cout<<"Enter the number of edge: " <<endl;
  cin>>m;
  
  Graph g;
  for(int i = 0;i<m; i++){
    int u, v;
    cin>>u >> v;
    g.addEdge(u,v,0);
  }
  g.print();
  
  

  return 0;
}