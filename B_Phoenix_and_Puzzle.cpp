#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

int isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    if (n%2==0 and isSquare(n/2)) cout<< "YES" <<'\n';
    else if (n%4==0 and isSquare(n/4)) cout<< "YES" <<'\n';
    else cout<< "NO" <<'\n';

}
return 0;
} //Code Contributed by Harshit Varshney