#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll a[n], b[n];
    for(ll i=0;i<n;i++) {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++) {
        cin>>b[i];
    }
    bool vivo[n] = {0};
    bool oppo[62] = {0};
    ll res = 0;
    bool op = false;
    for(ll i=30;i>=0;i--){
        ll o = 0 , z = 0;
        ll c = 0;
        ll p = 0;
        for(ll j=0;j<n;j++){
            if(a[j]&(1LL<<i)) o++;
            else{
                z++;
                if(vivo[j]==false and b[j]&(1LL<<i)){
                    bool ok1 = true;
                    for(ll k=30;k>i;k--){
                        if(oppo[k] and (b[j]&(1LL<<k))==0){
                            ok1 = false;
                            break;
                        }
                    }
                    if(ok1) c++;
                }
            }
        }
        if(o==n){
            oppo[i] = 1;
        }
        else if(z==c){
            for(ll j=0;j<n;j++){
                if(a[j]&(1LL<<i)){

                }
                else{
                    vivo[j] = true;
                    a[j] = b[j];
                }
            }
            oppo[i] = 1;
        }
    }
    ll m = 0;
    for(ll i=30;i>=0;i--){
        if(oppo[i]) res+=(1LL<<i);
    }
    for(ll i=0;i<n;i++){
        if(vivo[i]) m++;
    }
    cout<< res << " " << m <<'\n';
}
return 0;
} 