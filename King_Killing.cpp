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

struct TreeNode
{
    int data,level;
    vector<TreeNode *> child;
    TreeNode(int x)
    {
        data = x;
        level = 0;
    }
};
void buildTree(TreeNode *root,vector<vector<int>> &adj,vector<bool> &vis)
{
    vis[root->data]=1;
    for(int i=0; i < adj[root->data].size(); i++)
    {
        if(!vis[adj[root->data][i]])
        {
            TreeNode *tmp = new TreeNode(adj[root->data][i]);
            root->child.pb(tmp);
        }
    }
    for(int i=0; i < root->child.size(); i++)
    {
        buildTree(root->child[i] , adj , vis);
    }
}

void dfs(TreeNode *root,int l)
{
    root->level = l;
    for(int i=0; i < root->child.size(); i++)
    {
        TreeNode *curr = root->child[i];
        dfs(curr,l+1);
    }
}

vector<pair<int,int>> leaves;
void dfs2(TreeNode *root)
{
    for(int i=0; i < root->child.size(); i++)
    {
        TreeNode *curr = root->child[i];
        dfs2(curr);
    }
    if(root->child.size() == 0)
    {
        leaves.pb({root->level , root->data + 1});
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    int n;cin>>n;
    vector<vector<int>> adj(n);
    for(int i=0; i < n-1; i++)
    {
        int u,v;cin>>u>>v;
        u-- , v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    TreeNode *root = new TreeNode(0);
    vector<bool> vis(n, 0);
    buildTree(root, adj, vis);
    dfs(root, 0);
    vector<pair<int,int>> ans;
    for(int i=0; i < root->child.size(); i++)
    {
        dfs2(root->child[i]);
        vector<pair<int,int>> v;
        pair<int,int> p;
        bool ok = false;
        sort(leaves.begin(), leaves.end());
        p = leaves[0];
        v.pb(p);
        int val = p.first;
        int j = 1;
        while(j < leaves.size())
        {
            while(j < leaves.size() and leaves[j].first == val)
            {
                if(ok)
                {
                    v.pb({p.first + 1, leaves[j].second});
                }
                else{
                    v.pb(leaves[j]);
                }
                j++;
            }
            if(j < leaves.size())
            {
                v.clear();
                ok = true;
                p.second = leaves[j].second;
                v.pb({p.first+1,leaves[j].second});
                val = leaves[j].first;
                j++;
            }
        }
        leaves.clear();
        for(auto x : v)
        {
            ans.pb(x);
        }
    }
    sort(ans.begin(), ans.end());
    int d = ans[0].first;
    vector<int> aa;
    for(int i=0; i < ans.size(); i++)
    {
        if(ans[i].first == d)
        {
            aa.pb(ans[i].second);
        }
        else{
            break;
        }
    }
    cout<< aa.size() << " " << d <<'\n';
    for(auto x : aa)
    {
        cout<< x << " ";
    }
    cout<<'\n';
}
return 0;
}