#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define fff(i,a,b) for(int i = a; i < b ; i++)
#define pb push_back
#define YES cout<< 'YES' << endl; 
#define NO cout<< 'NO' << endl;
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;
const int mxn = 3e5 + 2;
vector <int> v[mxn];
vector <int> level[mxn];
vector <int> P(mxn , 0);
vector <int> deg(mxn , 0);
vector <int> variety(mxn , 0) , LEV(mxn , 0);
vector <int> subtree(mxn , -1);
vector <int> dp(mxn , mxn);
vector <int> dd(mxn);
vector <int> ans;
unordered_map <int, int> sub;
vector<pair<int, int>> curr;

void dfs(int x , int par)
{
    P[x] = par;
    for (auto it : v[x]) {
        if (it != par) {
            dfs(it , x);
        }
    }

    unordered_map <int, int> mp;
    for (auto it : v[x]) {
        if (it != par) {
            dp[x] = min(dp[x] , 1 + dp[it]);
            mp[dp[it]]++;
        }
    }

    if (mp.size() > 1 && x != 1)
        dp[x]++;

}

void final(int x , int par , int day) {

    dd[x] = day;
    if (deg[x] == 1) {
        ans.push_back(x);
        return;
    }

    for (auto it : v[x]) {
        if (it != par && dp[it] + 1 >= dd[x]) {
            final(it , x , min(dp[it] , day));
        }
    }

}

void clean(int n)
{
    for (int i = 0 ; i <= n ; ++i) {
        v[i].clear();
        level[i].clear();
        deg[i] = 0;
        dp[i] = mxn;
    }

    ans.clear();
}


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        clean(n);
        for (int i = 0 ; i < n - 1 ; ++i) {
            int x, y;
            cin >> x >> y;
            v[x].pb(y);
            v[y].pb(x);
            deg[x]++;
            deg[y]++;
        }

        for (int i = 2 ; i <= n ; ++i)
            if (deg[i] == 1)
                dp[i] = 0;


        dfs(1 , 0);

        int days = dp[1];

        vector <pair<int, int>> pos;
        for (auto it : v[1]) {
            if (dp[it] == days - 1) {
                final(it , 1 , days - 1);
            }
        }

        sort(ans.begin() , ans.end());

        cout << ans.size() << " " << days << '\n';
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << '\n';
    }

    return 0;
} // Code Contributed by Harshit Varshney