// #include<bits/stdc++.h>
// #include<iostream>
// #include<algorithm>
// #include<queue>
// using namespace std;
// typedef long long int ll;
// const int N = 2e3 + 100;
// const int mod = 1e9 + 7;

// bool IS(string s1,string s2)
// {
//     ll j = 0;
//     for(ll i=0;i<s2.size();i++)
//     {
//         if(s1[j]==s2[i]){
//             j++;
//         }
//         if(j==s1.size()){
//             return true;
//         }
//     }
//     return false;
// }

// string BS(string ss)
// {
//     queue<string> Q;
//     Q.push("1");
//     while(true)
//     {
//         string str1 = Q.front();
//         Q.pop();
//         if(IS(str1,ss)==false){
//             return str1;
//         }
//         string str2 = str1;
//         Q.push(str1.append("0"));
//         Q.push(str2.append("1"));
//     }
// }

// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll t;cin>>t;
// while(t--)
// {
//     string s;cin>>s;
//     int n=s.size();
//     bool ok = false;
//     for(ll i=0;i<n;i++)
//     {
//         if(s[i]=='0')
//         ok = true;
//     }
//     if(ok==false){ 
//         cout<< "0" <<'\n';
//     }
//     else {
//         cout<< BS(s) <<'\n';
//     }
        
// }
// return 0;
// }
#include<bits/stdc++.h>
#include<iostream>
#define ll long long
using namespace std;
using cmpl=complex<long double>;
constexpr int MAXN=(int)1e6;
int dp[MAXN+2],dp1[MAXN+2];
int n0[MAXN],n1[MAXN];

void code()
{
    string s;cin>>s;
    int n=s.size();
    int lp=-1;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            for(ll j=lp+1;j<=i;j++)
                n0[j]=i;
            lp=i;
        }
    }
    for(ll i=lp+1;i<n;i++)
    {
        n0[i]=n;
    }
    if(n0[0]==n)
    {
        cout<< "0";
        return;
    }
    lp=-1;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            for(ll j=lp+1;j<=i;j++)
                n1[j]=i;
            lp=i;
        }
    }
    for(ll i=lp+1;i<n;i++)
        n1[i]=n;
    dp[n]=dp[n+1]=0;
    dp1[n]=dp1[n+1]=0;
    for(ll i=n-1;i>=0;i--)
    {
        dp[i]=dp[i+1];
        if(s[i]=='0' and n1[i]<n)
            dp[i]=max(dp[i],dp[n1[i]+1]+1);
        if(s[i]=='1' and n0[i]<n)
            dp[i]=max(dp[i],dp[n0[i]+1]+1);
        dp1[i]=dp1[i+1];
        if(n1[i]<n)
            dp1[i]=max(dp1[i],dp[n1[i]+1]+1);

    }
    ll len=dp1[0]+1;
    int c=n1[0]+1;
    string ans = "1";
    for(ll i=1;i<len;i++)
    {
        if(c>=n)
        {
            ans.push_back('0');
            continue;
        }
        if(n0[c]>=n)
        {
            ans.push_back('0');
            c=n0[c]+1;
            continue;
        }
        if(dp[n0[c]+1]<len-i-1)
        {
            ans.push_back('0');
            c=n0[c]+1;
        }
        else{
            ans.push_back('1');
            c=n1[c]+1;
        }
    }
    cout<< ans <<'\n';
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    code();
}
return 0;
}