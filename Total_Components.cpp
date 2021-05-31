// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
// const int mod=1e9+7;
// //The end result of coders personal growth is,there codes becomes there documentation
// const int MAX = 10000000;
// long prefix[MAX + 1]; 
// void pre()
// {
//     bool prime[MAX + 1];
//     memset(prime, true, sizeof(prime));
//     for (ll p = 2; p * p <= MAX; p++) 
//     {
//         if (prime[p]) 
//         {
//             for (ll i = p * 2; i <= MAX; i += p)prime[i] = false;
//         }
//     }
//     prefix[0] = prefix[1] = prefix[2]=0;
//     for (ll p = 3; p <= MAX; p++) 
//     {
//         prefix[p] = prefix[p - 1];
//         if (prime[p])prefix[p]++;
//     }
// }
// ll query(ll L, ll R)
// {
//     return (prefix[R] - prefix[L]);
// }
// void solve()
// {
//     ll N;cin>>N;  //cout<<N<<'\n';
//     ll l = 1,r=N;
//     //ll ans=1 + ;
//     // for(ll i=r;i>=l;--i)
//     // {
//     //     if(i&1)
//     //     {
//     //         if((i*2)>r)++ans,cout<<i<<' ';
//     //     }
//     // 
//     //if()
//     cout<< query(N/2,N) + 1 <<'\n';
// }
// int main(void)
// {
// ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);pre();
// int T=1;        cin>>T;
// while(T--){solve();}exit(0);
// }//Solved By:- Ritik Agarwal/


#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(a,b,c) for(int a=b;a<c;a++)
#define ff(a,b,c) for(int a=b;a>=c;a--)
#define pb push_back
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;

const int MAX = 10000000;

long suffix[MAX + 1];
 
void sharmile()
{
    bool crimepetrol[MAX + 1];
    memset(crimepetrol, true, sizeof(crimepetrol));
 
    for(ll p=2; p*p<=MAX; p++) 
    {
        if(crimepetrol[p]) 
        {
            for(ll i = p * 2; i <= MAX; i += p)
            {
                crimepetrol[i] = false;
            }
        }
    }
 
    suffix[0] = suffix[1] = suffix[2] = 0;
    for(ll p = 3; p <= MAX; p++) 
    {
        suffix[p] = suffix[p - 1];
        if(crimepetrol[p]){
            suffix[p]++;
        }
    }
}

ll query(ll L, ll R)
{
    return suffix[R] - suffix[L];
}

// void accepted()
// {
    
// }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll l=1,r=n;
    sharmile();
    cout<< query(n/2,n) + 1 <<'\n';
    //accepted();
}
return 0;
} //Code Contributed by Harshit Varshney