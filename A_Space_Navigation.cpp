#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    string s;
	    cin >> s;
	    int cR = 0, cL = 0, cU = 0, cD = 0, R = 0, L = 0, D = 0, U = 0;
        if(x > 0) cR = x;
        else if(x < 0) cL = abs(x);
        
        if(y > 0) cU = y;
        else if(y < 0) cD = abs(y);
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='R') R++;
            if(s[i]=='L') L++;
            if(s[i]=='D') D++;
            if(s[i]=='U') U++;
        }
        if(R >= cR && L >= cL && U >= cU && D >= cD){
            cout << "YES" << "\n";
        } else cout << "NO" << "\n";

	}
	return 0;
}