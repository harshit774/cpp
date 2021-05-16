#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll a;
    vector<ll> first,second,third;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        if(a==0) third.push_back(a);
        if(a>0) second.push_back(a);
        if(a<0) first.push_back(a);
    }
    if(second.size()==0)
    {
        for(int i = 0; i < 2; i++){
            second.push_back(first.back()), first.pop_back();}
    }
    if (first.size() % 2 == 0) {
        third.push_back(first.back());
        first.pop_back();
    }
    cout<< first.size() <<" ";
    for(ll i=0;i<first.size();i++)
    {
        cout<< first[i] <<'\n';
    }
    cout<< second.size() << " ";
    for(ll i=0;i<second.size();i++)
    {
        cout<< second[i] <<'\n';
    }
    cout<< third.size() << " ";
    for(ll i=0;i<third.size();i++)
    {
        cout<< third[i] <<'\n';
    }
}
return 0;
} //Code Contributed by Harshit Varshney