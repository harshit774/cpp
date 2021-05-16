#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;
double round(double var)
{
    double value = (int)(var * 100 + .5);
    return (double)value / 100;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    double k1,k2,k3,v;
    cin>>k1>>k2>>k3>>v;
    //double x = 9.58;
    double y = k1*k2*k3*v;
    double ans = 100/y;
    double s = round(ans);
    
      
    if(s >= 9.58) cout<< "NO" <<'\n';
    else cout<< "YES" <<'\n';

}
return 0;
}