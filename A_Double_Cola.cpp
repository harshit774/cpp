    #include<bits/stdc++.h>
    #include<iostream>
    #include<algorithm>
    #include<queue>
    #define cc cin>>a[i];
    #define cy cout<< "YES" <<'\n';
    #define cn cout<< "NO" <<'\n';
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
        ll n,r=1;cin>>n;
        string s[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
        if(r*5<n)
        {
            n-=r*5;
            r*=2;
        }
        n-=1;
        n/=r;
        cout<< s[n] <<endl;
    }
    return 0;
    }   //Code Contributed by Harshit Varshney
