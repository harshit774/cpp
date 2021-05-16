#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N=4e6+5;
    int pree[N],solution[N];
    for(int i=0;i<N;i++){
        pree[i]=i;
        solution[i]=0;
    }
    for(int p=2;p<N;p++){
        if(pree[p]==p){
            pree[p]=p-1;
            for(int i=2*p;i<N;i+=p)
                pree[i]=(pree[i]/p)*(p-1);
        }
    }
    for(int i=1;i<N;i++){
        solution[i]+=i-1;
        for(int j=2*i;j<N;j+=i){
            solution[j]+=i*((1+pree[j/i])/2);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int k;
        cin >> k;
        cout << solution[4*k+1] <<"\n";
    }
    return 0;
} // Code Contributed by Harshit Varshney






























// #include<bits/stdc++.h>
// #include<iostream>
// #include<algorithm>
// #include<queue>
// #define ll long long ll
// #define pb push_back
// #define fo(i,n) for(ll i=0;i<n;i++)
// #define ff(i,n) for(ll i=n-1;i>=0;i--)
// #define YES cout<< 'YES' << endl 
// #define NO cout<< 'NO' << endl 
// using namespace std;
// const ll E = 2e3 + 100;
// const ll mod = 1e9 + 7;

// ll gcd(ll a,ll b)
// {
//     if(b==0) return a;
//     return gcd(b,a%b);
// }

// ll main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll t;cin>>t;
// while(t--)
// {
//     ll k;cin>>k;
//     ll solution = 0;
//     for(ll i=1;i<=2*k;i++)
//     {
//         solution+=gcd(k+i*i,k+(i+1)*(i+1));
//     }
//     cout<< solution <<'\n';
// }
// return 0;
// } //Code Contributed by Harshit Varshney