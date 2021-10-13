#include<bits/stdc++.h>
#include<iostream>
#define ll long long int
#define fo(a,b,c) for(int a=b;a<c;a++)
#define ff(a,b,c) for(int a=b;a>=c;a--)
#define pb push_back
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll a,b,c;cin>>a>>b>>c;
        ll z = max(max(a,b),c);
        ll p = (a==z) + (b==z) + (c==z);

        if(a==z && p==1) cout<< "0 ";
        else cout<< z-a+1 << " ";

        if(b==z && p==1) cout<<"0 ";
        else cout<< z-b+1 << " ";

        if(c==z && p==1) cout<< "0 \n";
        else cout<< z-c+1 << " \n";
    }
    return 0;
}