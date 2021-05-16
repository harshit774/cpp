#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r, x1, y1, x2, y2; cin >> r >> x1 >> y1 >> x2 >> y2;
    double d = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
    int ans=ceil(d / r / 2);
    cout << ans << endl;
    return 0;
}