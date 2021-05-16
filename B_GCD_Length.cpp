#include <bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(false), cin.tie(nullptr);
#define pb push_back
#define ff first
#define ss second
#define mp map
#define int long long
#define ump unordered_map
#define ve vector
#define inp(x, v) for (auto &x : v)
#define loop(i,n) for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end(),greater<int>())
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define maxx 100005
bool prime[maxx];
vector<int> samples; 
vector<int> g[10001];
vector<bool> vi(10001,false);
vector<int> allprime;
void seive(){
     memset(prime,true,sizeof(prime));
     prime[0]=false;
     prime[1]=false;
     for(int i=2;i*i<=maxx;i++){
          if(prime[i]==true){
               for(int j=i*i;j<=maxx;j+=i){
                    prime[j]=false;
               }
          }
     }
     for(int i=0;i<=maxx;i++){
          if(prime[i]){
               allprime.pb(i);
          }
     }
}

bool mycmp(pair<int,int>a, pair<int,int>b)
{
     return a.second<b.second;         //function for sorting second element of pairs of a given vector..
}
// sort(v.begin(),v.end(),mycmp);
// vector<pair<int,int>>vect;
/* // Entering values in vector of pairs 
    for (int i=0; i<n; i++) 
        vect.push_back( make_pair(arr[i],arr1[i]) ); 
  
    // Printing the vector 
    for (int i=0; i<n; i++) 
    { 
        // "first" and "second" are used to access 
        // 1st and 2nd element of pair respectively 
        cout << vect[i].first << " "
             << vect[i].second << endl; 
    } */
void dfs(int v,int& s) 
{   
	if(vi[v]==true)
	return;
	vi[v] = true; 
	s = s+samples[v - 1]; 
	for (int i=0;i<g[v].size();i++) { 
			dfs(i,s); 	
	} 
} 
void motherboard(int vokes) 
{ 
	int sol = INT_MIN; 
	int i=1;
        while(i<=vokes)
        {

		if (vi[i] == false)
		 { 
			int s = 0; 
			dfs(i,s);
// 			cout<<sum<<endl;
			if (s > sol) 
			{ 
				sol = s; 
                // cout<<sum<<endl;
			 } 
		                        
         } 
	      i=i+1;         
          //cout<<i<<endl;     

	     } 
	cout <<sol << endl; 
    //cout<<res<<endl;
} 
int  fdigit(int f)
{
    int ans=0;
    while(f)
    {
        f=f/10;
        ans++;
    }
    return ans;
}

struct Node
{
     int data;
     struct Node* left ,*right;
     Node(int data)
     {
          this->data=data;
          left=right=NULL;
     }
};
/* Check for Prime here */
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
bool sod( int x)
{
    int sum=0;
    int k=x;
    while(k>0)
    {
        sum+=k%10;
        k=k/10;
    }
    if(__gcd(x,sum)>1) return true;
    return false;
}
int digitalRoot(string num)
{
    // If num is 0.
    if (num.compare("0") == 0)
        return 0;
  
    // Count sum of digits under mod 9
    int ans = 0;
    for (int i=0; i<num.length(); i++)
        ans = (ans + num[i]-'0') % 9;
  
    // If digit sum is multiple of 9, answer
    // 9, else remainder with 9.
    return (ans == 0)? 9 : ans % 9;
}
string isFibonacci(string s)
{
    // map to store the
    // frequencies of character
    map<char, int> m;
  
    for (int i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }
  
    // Vector to store first n
    // fibonacci numbers
    vector<int> v;
  
    // Get the size of the map
    int n = m.size();
  
    // a and b are first and second terms of
    // fibonacci series
    int a = 1, b = 1;
  
    int c;
    v.push_back(a);
    v.push_back(b);
  
    // vector v contains elements of fibonacci series
    for (int i = 0; i < n - 2; i++) {
        v.push_back(a + b);
        c = a + b;
        a = b;
        b = c;
    }
  
    int flag = 1;
    int i = 0;
  
    // Compare vector elements with values in Map
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        if (itr->second != v[i]) {
            flag = 0;
            break;
        }
  
        i++;
    }
  
    if (flag == 1)
        return "YES";
    else
        return "NO";
}
bool ispalindrome(string s)
{
    int l = s.length();
    int j;
     
    for(int i = 0, j = l - 1; i <= j; i++, j--)
    {
        if(s[i] != s[j])
            return false;
    }
    return true;
}
void code()
{ 
    int  x,y,z;
    cin>>x>>y>>z;
    int p1=pow(10,x-1);
    int p2=pow(10,y-1);
    string r1 = to_string(p1);
    string r2 = to_string(p2);
    int p =  fdigit(100);
    if(x>=z && y<z)
    {
        r1[r1.length()-z]='1';

        cout<<r1<<" ";
        cout<<r2;
        cout<<endl;

        return;
    }
    
    if(x<z && y>=z)
    {
        r2[r2.size()-z]='1';
        cout<<r1<<" ";
        cout<<r2;
        cout<<endl;
        return;
    }
    r2[r2.size()-z]='1';
    cout<<r1<<" ";
    cout<<r2;
    cout<<endl;
    


}
 void LONG()
{
   int  nn,mm,kk;

    cin>>nn>>mm>>kk;

    vector<int> vvv(nn+1);

    loop(i,nn)
    {
        cin>>vvv[i+1];
    }

    vector<vector<pair<int, int>>> arr(nn+1);

    vector<vector<pair<int, int>>>brr(nn+1);

    loop(i,mm)
    {
        int u,v,d;

        cin>>u>>v>>d;

        arr[u].pb({i,d});

        arr[v].pb({i,d});

    }
    brr[0].pb({0,0});

    for(int i=1;i<=nn;i++)

    {
        vector<pair<int,int>> tt;

        tt.insert(tt.end(),brr[i-1].begin(),brr[i-1].end());

        int ccc=0;

        int mpp=0;

        set<int>pp;

        for(int j=i;j>=1;j--)

        {
            ccc = ccc + vvv[j];

            mpp=mpp^1LL<<j;

            for(auto it:arr[j])
            {
                if(pp.count(it.first))
                {
                    ccc=ccc+it.second;
                }
                else pp.insert(it.first);
            }
            if(j>1)
            {
                for(auto it:brr[j-2])
                {
                    tt.pb({it.first+ccc,mpp^it.second});
                }
            }
            else tt.pb({ccc,mpp});
        }

        sort(tt.begin(),tt.end());
        
        reverse(tt.begin(),tt.end());

        
        set<int>ro;
        
        int fff=0;
        
        for(int j=0;j<tt.size() && fff<kk;j++)
        {
            if(ro.count(tt[j].second))

            continue;

            brr[i].pb(tt[j]);
            
            fff=fff+1;
            
            ro.insert(tt[j].second);
        }
    }
    loop(i,kk)
    {
        cout<< brr[nn][i].first << " ";
    }
    cout<<endl;
 
}
  
int32_t main(){
   speed;  
   int t=1;
    cin>>t;
    //int n;
    while(t--){
      code();
     // LONG();
   }
    return 0;
}