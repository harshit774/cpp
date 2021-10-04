#include<bits/stdc++.h>
#include<iostream>
#define ll long long int
#define fo(a,b,c) for(int a=b;a<c;a++)
#define ff(a,b,c) for(int a=b;a>=c;a--)
#define pb push_back
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,m;cin>>n>>m;
    ll a[n] , b[m];
    for(ll i=0;i<n;i++) cin>>a[i];
    fo(i,0,m) cin>>b[i];
    ll ans[n+m]; // create another array of size n+m which will store the resultant array
    int i = 0 , j = 0 , k = 0; // initialize with starting array
    while(i < n and j < m){   // start traversing both the array 
        if(a[i] < b[j]){    // Check if current element of first array is smaller than current element
                            // of second array. If yes, store first array element and increment first array
                            // index. Otherwise do same with second array
            ans[k] = a[i];
            i++ , k++;
        }
        else{
            ans[k] = b[j];
            j++, k++;
        }
    }
    while(i < n){   // Store remaining elements of first array
        ans[k++] = a[i++]; 
    }
    while(j < m){  // Store remaining elements of second array
        ans[k++] = b[j++];
    }
    // Resultant array
    for(ll i=0;i<n+m;i++){
        cout<< ans[i] << " ";
    }
    cout<< endl;
}
return 0;
} //Code Contributed by Harshit Varshney