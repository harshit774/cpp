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
    ll a,b,c,d,e,f,g,h,i;cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
    cout<< (f+h)/2 << " " << b << " " << c <<'\n';
    cout<< d << " " << (d+f)/2 << " " << f <<'\n';
    cout<< g << " " << h << " " << (b+d)/2 <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney