#include <bits/stdc++.h>
using namespace std;
vector<long long>dp;
int mod = 10000007;
// int recursion(string words,vector<int>&hash,int i)
// {
//     if(i==words.size()) return 1;
//     int ans = recursion(words,hash,i+1);
//     if(hash[words[i]-'a']==0)
//     {   hash[words[i]-'a']++;
//         ans  = max(ans,recursion(words,hash,i+1));
//         hash[words[i]-'a']=0;
//     }
//     return ans;
// }

long long helper2(string words,int i,int &n)
{   
    if(i == n) return 1;
    if(dp[i]!=-1) return dp[i];
    int j = i; long long cnt = 1;
    while(j<n-1&&words[j]==words[j+1]) {cnt++;j++;}
    long long ans = ((cnt+1)%mod*helper2(words,j+1,n)%mod+mod)%mod;
    return dp[i]=ans;
}

void solve()
{
    string words; cin>>words;
    sort(begin(words),end(words));
    // vector<int>hash(26,0);
    // cout<<recursion(words,hash,0);
    dp = vector<long long>(words.size()+1,-1);int n = words.size();
    cout<<helper2(words,0,n);
}

int main()
{
    solve();
    return 0;
}