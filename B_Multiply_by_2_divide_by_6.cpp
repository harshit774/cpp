#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
void mainHelper()
{
  int n;
  cin>>n;
  int c2=0,c3=0;
  while(n%2==0)
  {
    n/=2;
    c2++;
  }
  while(n%3==0)
  {
       n/=3;
       c3++;
  }
  if(c2<=c3 && n==1)
  {
       cout<<2*c3-c2<<endl;
       
  }
  else
  {
    cout<<-1<<endl;
  }
 
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;cin>>t;
	mainHelper();
	return 0;
}