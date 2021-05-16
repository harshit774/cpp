#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

void makePolygon(float a)
{
	// N denotes the number of sides
	// of polygons possible
	float n = 360 / (180 - a);
	if (n == (int)n)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    float a;
    cin >> a;
    makePolygon(a);

}
return 0;
} //Code Contributed by Harshit Varshney