#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

// int power[31];
 
// // to store presum of the power of 2's
// int pre[31];

// // function to find power of 2
// void PowerOfTwo()
// {
//     // to store power of 2
//     int x = 1;
//     for (int i = 0; i < 31; i++) {
//         power[i] = x;
//         x *= 2;
//     }
 
//     // to store pre sum
//     pre[0] = 1;
//     for (int i = 1; i < 31; i++)
//         pre[i] = pre[i - 1] + power[i];
// }
 
// // Function to find the sum
// int Sum(int n)
// {
//     // first store sum of
//     // first n natural numbers.
//     int ans = n * (n + 1) / 2;
 
//     // find the first greater number than given
//     // number then minus double of this
//     // from answer
//     for (int i = 0; i < 31; i++) {
//         if (power[i] > n) {
//             ans -= 2 * pre[i - 1];
//             break;
//         }
//     }
 
//     return ans;
// }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll ans = n*(n+1)/2;
    ll p=1;
    while(p<=n)
    {
        ans-=p*2;
        p*=2;
    }
    cout<< ans <<'\n';
    // ll n;cin>>n;
    // PowerOfTwo();
    // cout<< Sum(n) <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney