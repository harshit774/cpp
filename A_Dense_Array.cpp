#include<bits/stdc++.h>
#include<algorithm>
#define ll long long int
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        int n,l;
        cin>>n>>l;
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            int w;
            cin >> w;
            int a = min(l, w);
            int b = max(l, w);
            while (a * 2 < b)
            {
                ans++;
                a *= 2;
            }
            l = w;
        }
        cout << ans << "\n";
    }
    return 0;
}
