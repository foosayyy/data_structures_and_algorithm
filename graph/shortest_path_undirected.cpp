#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> adj[] ,int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void BFS(vector<int> adj[],int s,int V,vector<int> &dis)
{
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
        for(auto &x:adj[u])
        {
            if(visited[x]==false)
            {
                dis[x]=dis[u]+1;
                visited[x]=true;
                q.push(x);
            }
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
  addedge(adj,1,2);
  addedge(adj,1,3);

  vector<int> dis(V,INT_MAX);
  dis[0]=0;
  BFS(adj,0,V,dis);
  for(auto &x:dis)
  {
      cout<<x<<" ";
  }

  return 0;
}
