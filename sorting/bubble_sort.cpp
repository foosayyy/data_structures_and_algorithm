\\In every ith iteration the largest element comes at end.
\\TIME COMPLEXITY=O(n^2)
\\Space complexity=O(1)


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
  for(int i=0;i<n-1;i++)
  {
      for(int j=0;j<n-1-i;j++)
      {
          if(v[j]>v[j+1])                 \\comparison between j and j+1
          {
              swap(v[j],v[j+1]);
          }
      }
  }
  for(auto &x:v)
  {
      cout<<x<<" ";
  }
  
return 0;
}


