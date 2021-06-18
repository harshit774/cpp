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
const int E = 2e3 + 100;
const int mod = 1e9 + 7;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    if(n%2==1){
        cout<< "Bob" <<'\n';
    }
    else{
    	int count = 0;
        while(n%2==0){
            n/=2;
            count++;
        }
        if(n>1){
            cout<< "Alice" <<'\n';
        }
        else{
            if(count%2==1){
                cout<< "Bob" <<'\n';
            }
            else{
                cout<< "Alice" <<'\n';
            }
        }
    }
}
return 0;
} //Code Contributed by Harshit Varshney