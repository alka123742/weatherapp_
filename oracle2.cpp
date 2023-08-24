#include <bits/stdc++.h>
using namespace std;


void helper(vector<int>&red,vector<int>&blue,int &cost)
{
    int n = red.size();
    vector<int>dp1(n,0),dp2(n,0);
    dp1[0] = red[0];
    dp2[0] = blue[0]+cost;
    cout<<0<<" ";
    cout<<min(dp1[0],dp2[0])<<" ";
    for(int i=1;i<n;i++)
    {
        dp1[i] = min(dp1[i-1],dp2[i-1])+red[i];
        dp2[i] = min(dp1[i-1]+cost,dp2[i-1])+blue[i];
        cout<<min(dp1[i],dp2[i])<<" ";
    }
    cout<<endl;

}

void solve ()
{
    int n ; cin>>n;
    vector<int>red(n),blue(n); 
    int cost; cin>>cost;
    for(int i=0;i<n;i++) cin>>red[i];
    for(int j=0;j<n;j++) cin>>blue[j];
    helper(red,blue,cost);
}

int main()
{ 
     solve();
     return 0;
}