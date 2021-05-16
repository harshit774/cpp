#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll c=0;
        if(s[0]=='1')
        {
            c++;
        }
        for(ll i=1;i<s.size();i++)
        {
            if(s[i]=='1' and s[i]!=s[i-1]) 
                c++;
        }
        cout<< c <<'\n';
    }
}