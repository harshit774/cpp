#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s;cin>>s;
    bool ok=false;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]>=33 and s[i]<=126){
            if(s[i]=='H' or s[i]=='Q' or s[i]=='9')
                ok=true;
        }
    }
    if(ok) cout<< "YES" <<'\n';
    else cout<< "NO" <<'\n';
return 0;
}