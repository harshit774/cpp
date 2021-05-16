#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;
bool isP(ll prod){
    ll sr = sqrt(prod);
    return (sr * sr == prod);
}

void Accepted()
{
    ll n;
    cin >> n;
    ll arr[n];
    //ll prod = 1;
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(ll i=0;i<n;i++)
    {
        if(!isP(arr[i]))
        {
            cout<< "YES" <<'\n';return;//break;
        }
    }
    cout<< "NO" <<'\n';//break;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    Accepted();
}
return 0;
} //Code Contributed by Harshit Varshney