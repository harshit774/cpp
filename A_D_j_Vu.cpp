#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

void Accepted(){
    string s;
    cin>>s;
    int n=s.size();
    int c=count(s.begin(),s.end(),'a');
    string k;
    k='a';k+=s;
    string ss;
    ss=s;ss+='a';
    if(c==n){
    	cout<<"NO"<<endl;
    }else{
        for(int i=0;i<k.size()/2;i++){
            if(k[i]!=s[n-i-1]){
                cout<<"YES"<<endl;
                cout<<k<<endl;
                return;
            }
        }
        for(int i=0;i<ss.size();i++){
            if(ss[i]!=ss[n-i-1]){
                cout<<"YES"<<endl;
                cout<<ss<<endl;
                return;
            }
        }
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--){
    Accepted();
}
exit(0);
return 0;
}