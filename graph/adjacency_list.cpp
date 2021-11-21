#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> adj[] ,int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
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

    for(int i=0;i<V;i++)
    {
      for(auto &x:adj[i])
      {
        cout<<x<<" ";
      }
      cout<<"\n";
    }

  

  return 0;
}
