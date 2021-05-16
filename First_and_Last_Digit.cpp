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
    ll n,f,l;cin>>n;
    ll sum;
    f = n; 
	
	while(f >= 10)
	{
		f = f/10;
	}
  	
  	l = n % 10;
  	
  	sum = f + l;
  	
	// cout << "\nThe First Digit in a Given Number  " << number << " = " << firstDigit; 
	// cout << "\nThe Last Digit in a Given Number   " << number << " = " << lastDigit; 
	cout << sum <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney