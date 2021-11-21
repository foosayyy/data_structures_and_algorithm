#include<bits/stdc++.h>
using namespace std;

void topo(vector<int> adj[],int V)
{
    vector<int> indegree(V,0);
    for(int i=0;i<V;i++)
    {
        for(auto &ele:adj[i])
        {
            indegree[ele]++;
        }
    }
    queue<int> q;
    for(int i=0;i<V;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }

    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        cout<<p<<" ";
        for(auto & ele : adj[p])
        {
            indegree[ele]--;
            if(indegree[ele]==0)
            {
                q.push(ele);
            }
        }
    }
}
void add_edge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
}
int main()
{
    int V=5;
    vector<int> adj[V];
    // add_edge(adj,0,2);
    // add_edge(adj,0,3);
    // add_edge(adj,1,3);
    // add_edge(adj,1,4);
     ///////
 

    add_edge(adj,0, 2); 
    add_edge(adj,0, 3); 
    add_edge(adj,1, 3); 
    add_edge(adj,1, 4); 
    add_edge(adj,2, 3);  
    
    topo(adj,V);
}
