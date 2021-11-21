#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> adj[] ,int u,int v)
{
    adj[u].push_back(v); 
    adj[v].push_back(u);
}
void DFSrecur(vector<int> adj[],int s,bool visited[])
{
    visited[s]=true;
    for(auto &x:adj[s]){
        if(visited[x]==false)
        {
            DFSrecur(adj,x,visited);
        }
    }
}
void DFS(vector<int> adj[],int V,int &c)
{
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            c++;
         DFSrecur(adj,i,visited);
        }
    }
}
 
int main()
{
  ///////
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
  #endif
  ///////
  int V;
  cin>>V;
  vector<int> adj[V];
  	addedge(adj,0,1); 
	addedge(adj,0,2); 
	addedge(adj,2,3); 
	addedge(adj,1,3); 
	addedge(adj,4,5);
	addedge(adj,5,6);
	addedge(adj,4,6);


    int c=0;
    
    DFS(adj,V,c);
    cout<<c<<" ";

  return 0;
}
