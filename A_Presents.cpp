#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// ll t=1;cin>>t;
// while(t--)
// {

// }
int n;
cin >> n;
int arr[n+1],brr[n+1];
for(int i = 1; i <= n; i++){
    cin >> arr[i];
}
for(int i = 1; i <=n; i++){
    brr[arr[i]] = i;
}
for(int i = 1; i <= n; i++) cout << brr[i] << " ";
return 0;
}