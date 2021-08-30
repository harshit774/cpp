#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
int smallestSumSubarr(int arr[], int n)
{
    int min_ending_here = INT_MAX;
    int min_so_far = INT_MAX;
    for (int i=0; i<n; i++)
    {
        if (min_ending_here > 0)
            min_ending_here = arr[i];
        else
            min_ending_here += arr[i];
        min_so_far = min(min_so_far, min_ending_here);           
    }
    return min_so_far;
}
int main()
{
    int N;
    cin>>N;
    int A[N];
    //int mn = INT_MAX;
    for(int i=0;i<N;++i)
    {
        cin>>A[i];
        //mn = min(mn,A[i]);
    }  
    int mx = maxSubArraySum(A,N);
    int mn = smallestSumSubarr(A,N);
    //cout<<mx<<' '<<mn<<'\n';
    cout<< (mx - mn) <<'\n';
}




// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main(){
//     ll n;cin>>n;
//     ll a[n];
//     ll count = 0;
//     for(ll i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(ll i=0;i<n;i++){
//         for(ll j=i+1;j<n;j++){
//             if(a[i]>a[j]){
//                 count++;
//             }
//         }
//     }
//     cout<< count <<'\n';
// }
