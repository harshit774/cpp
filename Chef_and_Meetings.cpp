#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll calch(string mytime, ll t)
{
    ll mh;
    mh = 10 *(mytime[0 + t] - '0') + 1* (mytime[1 + t] - '0');
    if(mytime[6+t] == 'P'){if(mh != 12) mh += 12;}
    if(mytime[6 + t] == 'A') {if(mh == 12) mh-= 12;}
    return mh;
}
ll calcm(string mytime, ll t)
{
    ll mm;
    mm = 10 *(mytime[3 + t] - '0') + (mytime[4 + t] - '0');
    return mm;
}

int main()
{
    ll t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string mytime; getline(cin, mytime);
        ll mh = calch(mytime, 0);
        ll mm = calcm(mytime, 0);
        ll n; cin>>n; cin.ignore();
        string res = "";
        while(n--)
        {
            string friendtime; getline(cin, friendtime);
            ll fsh = calch(friendtime, 0);
            ll fsm = calcm(friendtime, 0);
            ll feh = calch(friendtime, 9);
            ll fem = calcm(friendtime, 9);


            if((fsh> mh)||(feh< mh)) {res.push_back('0');}
            else if(fsh == mh && fsm> mm) res.push_back('0');
            else if(feh == mh && fem< mm) res.push_back('0');
            else res.push_back('1');
        }
        cout<<res<<"\n";       
    }
    return 0;
}