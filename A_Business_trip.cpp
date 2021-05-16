#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll k;cin>>k;
    vector<ll> water;
    for(ll i=0; i < 12; i++)
    {
        ll temp;cin>>temp;
        water.push_back(temp);
    }
    ll n = water.size();
    sort(water.begin(), water.end());
    ll sum = 0;
    ll month = 0;
    bool found = false;
    if(k == 0)
    {
        cout<< 0 <<'\n';
        found = true;
    }
    for(ll i=n-1; i >= 0 && !found; i--)
    {
        sum += water[i];
        month++;
        if(sum >= k)
        {
            cout<< month <<'\n';
            found = true;
            break;
        }
    }
    if(!found)
    cout<< -1 <<'\n';
    return 0;
}