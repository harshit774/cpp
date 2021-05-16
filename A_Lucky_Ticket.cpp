#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll n;cin>>n;
    string s;cin>>s;
    bool flag=true;
    ll sf=0,sl=0;
    for(ll i=0;i<n;i++){
        if(s[i]!='4'&& s[i]!='7'){
            flag=false;
            cout<<"NO"<<'\n';
            return 0;
        }
        else{
            if(i<n/2)
                sf+=s[i]-'0';
            else
                sl+=s[i]-'0';
        }
    }
    if(flag && sf==sl)
        cout<<"YES"<<'\n';
    else
        cout<<"NO"<<'\n';
}