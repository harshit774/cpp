#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s,s1,s2,s3;
    cin>>s>>s1>>s2>>s3;
    s3=s+s1;
    sort(s3.begin(),s3.end());
    sort(s2.begin(),s2.end());
    if(s2==s3) cout<< "YES" <<'\n';
    else cout<< "NO" <<'\n';
return 0;
}