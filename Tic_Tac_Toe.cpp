#include<bits/stdc++.h>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define YES cout<< 'YES' << endl;
#define NO cout<< 'NO' << endl; 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;
// #define ll long long int
// using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    char a[3][3];
    ll cx = 0 , co = 0 , cu = 0;
    for(ll i=0;i<3;i++)
    {
        for(ll j=0;j<3;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='X'){
                cx++;
            }
            if(a[i][j]=='O'){
                co++;
            }
            if(a[i][j]=='_'){
                cu++;
            }
        }
    }
    ll c1 = 0, c2 = 0;
    if(a[0][0] == 'X' and a[1][0] == 'X' and a[2][0] == 'X')
    {
        c1=1;
    }
    if(a[0][1] == 'X' and a[1][1] == 'X' and a[2][1] == 'X')
    {
        c1=1;
    }
    if(a[0][2] == 'X' and a[1][2] == 'X' and a[2][2] == 'X')
    {
        c1=1;
    }
    if(a[0][0] == 'X' and a[1][1] == 'X' and a[2][2] == 'X')
    {
        c1=1;
    }
    if(a[0][0] == 'X' and a[0][1] == 'X' and a[0][2] == 'X')
    {
        c1=1;
    }    
    if(a[1][0] == 'X' and a[1][1] == 'X' and a[1][2] == 'X'){
        c1=1;
    }
    if(a[2][0] == 'X' and a[2][1] == 'X' and a[2][2] == 'X'){
        c1=1;
    }
    if(a[0][2] == 'X' and a[1][1] == 'X' and a[2][0] == 'X')
    {
        c1=1;
    }


    if(a[0][0] == 'O' and a[1][0] == 'O' and a[2][0] == 'O')
    {
        c2=1;
    }
    if(a[0][1] == 'O' and a[1][1] == 'O' and a[2][1] == 'O')
    {
        c2=1;
    }
    if(a[0][2] == 'O' and a[1][2] == 'O' and a[2][2] == 'O')
    {
        c2=1;
    }
    if(a[0][0] == 'O' and a[1][1] == 'O' and a[2][2] == 'O')
    {
        c2=1;
    }
    if(a[0][0] == 'O' and a[0][1] == 'O' and a[0][2] == 'O')
    {
        c2=1;
    }
    if(a[1][0] == 'O' and a[1][1] == 'O' and a[1][2] == 'O')
    {
        c2=1;
    }
    if(a[2][0] == 'O' and a[2][1] == 'O' and a[2][2] == 'O')
    {
        c2=1;
    }
    if(a[0][2] == 'O' and a[1][1] == 'O' and a[2][0] == 'O')
    {
        c2=1;
    }


    if((c1 == 1 and c2 == 1) or ((cx-co)<0) or (cx-co)>1) {
        cout<< 3 <<"\n";
    }
    else if(cx == 0 and co == 0 and cu == 9) {
        cout<< 2 <<"\n";
    }
    else if(c1 == 1 and c2 == 0 and cx > co) {
        cout<< 1 <<"\n";
    }
    else if(c1 == 0 and c2 == 1 and cx == co) {
        cout<< 1 <<"\n";
    }
    else if(c1 == 0 and c2 == 0 and cu == 0) { 
        cout<< 1 <<"\n";
    }
    else if(c1 == 0 and c2 == 0 and cu > 0) {
        cout<< 2 <<"\n";
    }
    else {
        cout<< 3 <<"\n";
    }
}
return 0;
} 
