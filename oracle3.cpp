#include <bits/stdc++.h>
using namespace std;


void solve()
{
   int n; cin>>n; 
   int dp1[n],dp2[n];
   for(int i=0;i<n;i++) cin>>dp1[i];
   for(int j=0;j<n;j++) cin>>dp2[j];
   int  moves = 0;
   for(int i=0;i<n;i++)
   {
      string s1 = to_string(dp1[i]); string s2 = to_string(dp2[i]);
      int a = s1.size()-1; int j = s2.size()-1;
      while(a>=0&&j>=0)
      {
        moves+= abs(s1[a]-s2[j]);
        j--; a--;
      }
      while(a>=0) moves +=(int)(s1[a--]-'a');
      while(j>=0) moves +=(int)(s2[j--]-'a');
   }
   cout<<moves<<endl;
}

int main()
{
    solve();
    return 0;
}