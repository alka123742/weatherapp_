#include <bits/stdc++.h>
using namespace std; 


void solve()
{
    int n ; cin>>n; 
    int magic[n]; int dist[n];
    for(int i=0;i<n;i++) cin>>magic[i];
    for(int j=0;j<n;j++) cin>>dist[j];
    int sum1 = 0; int sum2 = 0;
    for(int i=0;i<n;i++)
    {
      sum1+=magic[i]; sum2 +=dist[i];
    }
    if(sum1<sum2) {cout<<-1<<endl; return;}
    int buffer =0; int st = 0;
    for(int i=0;i<=n-1;i++)
    {
        buffer += magic[i]-dist[i];
        if(buffer<0)
        {
            st = i+1; buffer = 0;
        }
    } 
    if(st==n) cout<<-1<<endl;
    else cout<<st<<endl;
//     cout<<st<<endl;
}

int main ()
{
    solve();
    return 0;
}