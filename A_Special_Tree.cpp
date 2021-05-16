#include <bits/stdc++.h>
#define ll long long

using namespace std;
const ll N = 18;

void dfs(ll u, ll par, vector<vector<ll>>& graph, vector<ll>& level, ll lvl,
         vector<vector<ll>>& parent) {
    level[u] = lvl;
    parent[u][0] = par;
    for (auto to : graph[u]) {
        if (to == par) continue;
        dfs(to, u, graph, level, lvl + 1, parent);
    }
}

void dfs2(ll u, ll par, vector<vector<ll>>& graph, vector<ll>& ok,
          set<ll>& spec) {
    for (auto to : graph[u]) {
        if (to == par) continue;
        dfs2(to, u, graph, ok, spec);
        if (ok[to] != -1) {
            ok[u] = ok[to];
        }
    }
    if (ok[u] == -1) {
        if (spec.count(u)) {
            ok[u] = u;
        }
    }
}
void solve() {
    ll n, k, a;
    cin >> n >> k >> a;
    a--;
    vector<vector<ll>> graph(n);
    set<ll> spec;
    for (ll i = 0; i < k; i++) {
        ll temp;
        cin >> temp;
        temp--;
        spec.insert(temp);
    }
    for (ll i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        u--, v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<vector<ll>> par(n, vector<ll>(N, -1));
    vector<ll> lvl(n);
    dfs(a, -1, graph, lvl, 0, par);
    for (ll level = 1; level < N; level++) {
        for (ll i = 0; i < n; i++) {
            if (par[i][level - 1] != -1) {
                par[i][level] = par[par[i][level - 1]][level - 1];
            }
        }
    }
    vector<ll> ok(n, -1);
    dfs2(a, -1, graph, ok, spec);
    vector<ll> ans1(n), ans2(n);
    for (ll node = 0; node < n; node++) {
        if (ok[node] != -1) {
            ans1[node] = lvl[node];
            ans2[node] = ok[node];
            continue;
        }
        ll curr = node;
        ll last = N - 1;
        while (1) {
            ll flag = 0;
            ll temp_last;
            for (ll lvl = last; lvl >= 0; lvl--) {
                ll u = par[curr][lvl];
                temp_last = lvl;
                if (u == -1) continue;
                if (ok[u] == -1) {
                    curr = u;
                    flag = 1;
                    break;
                }
            }
            if (!flag) {
                curr = par[curr][0];
                last = temp_last;
                break;
            }
        }
        ll d1 = lvl[curr];
        ll d2 = lvl[node] - lvl[curr];
        ans1[node] = d1 - d2;
        ans2[node] = ok[curr];
    }
    for (ll i = 0; i < n; i++) {
        cout << ans1[i] << " ";
    }
    cout << endl;
    for (ll i = 0; i < n; i++) {
        cout << ans2[i] + 1 << " ";
    }
    cout << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}// Code Contributed by Harshit