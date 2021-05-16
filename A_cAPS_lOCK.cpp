#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   int i,l=0;
    string s;cin>>s;
    for(i=1; i<s.size(); i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            l++;
        }
    }
    if(l==s.size()-1)
    {
        for(i=0; i<s.size(); i++)
        {
            if(s[i]>=65 && s[i]<=90)
                s[i]=97+s[i]-65;
            else if(s[i]>=97 && s[i]<=122)
                s[i]=65+s[i]-97;
        }
    }
    cout<< s <<"\n";
    return 0;
}