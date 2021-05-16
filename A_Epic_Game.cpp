#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int gcd(int x, int y)
{
    return (x==0)? y : gcd(y % x, x);
}
int main()
{
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll t;cin>>t;
// while(t--)
// {
// }
    int a, b, n;
    cin >> a >> b >> n;
    int k = 0;
    while (n>=0)
    {
        k++;
        n -= gcd((k & 1) ? a : b, n);
    }
    if (k & 1) cout << 1; 
    else cout << 0;
    return 0;
}