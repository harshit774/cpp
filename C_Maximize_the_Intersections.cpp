#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
#define st first
#define nd second
#define double long double
#define ii pair<int, int>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18 + 7;
const int N = 2e3 +  5;
double pi = acos(-1);
struct domino
{

    int a, b, c, d, h;
    bool operator < (const domino & r) const
    {
        return h > r.h || (h == r.h && a < r.a);
    }
};
vector<domino> v;
int a[N][N];
int n, k, _res = 0, ans = 0;
ll res = 0;
bool cnt[N][N];
void solve(int x)
{
    memset(cnt, 0, sizeof(cnt));
    cnt[v[x].a][v[x].b] = 1;
    cnt[v[x].c][v[x].d] = 1;
    ans += v[x].h ;
    int i = 1;
    int ppos = x + 1;
    while (i < k && ppos < v.size())
    {
        while (cnt[v[ppos].a][v[ppos].b] || cnt[v[ppos].c][v[ppos].d] && ppos < v.size()) ppos++;
        if (ppos < v.size())
        {
            cnt[v[ppos].a][v[ppos].b] = 1;
            cnt[v[ppos].c][v[ppos].d] = 1;
            ans += v[ppos].h;
            i++;
        }
    }
    if (i < k)
    {
        ans = 0;
        return;
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (j >= 2)
            {
                v.pb({i, j - 1, i, j, a[i][j] + a[i][j - 1]});
            }
            if (i >= 2)  v.pb({i - 1, j, i, j, a[i - 1][j] + a[i][j]});
            res += a[i][j];
        }
    }
    sort(v.begin(), v.end());
    int pos = v.size() - 1;
    for (int i = 0; i <= min((int)20, pos); i++)
    {
        ans = 0;
        solve(i);
        _res = max(_res, ans);
    }
    cout << res - _res;
    return 0;
}