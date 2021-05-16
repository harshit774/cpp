#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll N,K;cin>>N>>K;
    ll i=1;
    ll j=N;
    vector<int> V;
    if(K<=(N-1)/2){
      ll z=0;
      while(K){
          if(z==0){
               V.push_back(i);
               i++;
               z=1-z;
          }else{
               V.push_back(j);
               j--;
               z=1-z;
               K--;
          }
      }
      for(int k=i;k<j+1;k++){
          V.push_back(k);
      }
      for(auto z:V){
          cout<< z <<" ";
      }
      cout<<'\n';
    }else{
     cout<< -1 <<'\n';
    }
}
return 0;
} //Code Contributed by Harshit Varshney