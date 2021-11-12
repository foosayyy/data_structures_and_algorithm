//In this sorting we find the index of the smallest element and swap it with the ith index in every iteration.
//time complexity=O(n^2)
//space complexity=O(1)

#include<bits/stdc++.h>
using namespace std;

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

  int n;
  cin>>n;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    int p;
    cin>>p;
    v.push_back(p);
  }
  int smallest;
  for(int i=0;i<n-1;i++)
  {
    smallest=i;
    for(int j=i+1;j<n;j++)
    {
        if(v[j]<v[smallest])
        {
            smallest=j;
        }
    }
    swap(v[i],v[smallest]);
  }
    for(auto &x:v)
      cout<<x<<" ";


  return 0;
}
