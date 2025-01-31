#include<bits/stdc++.h>
using namespace std;

const int d = 1e6;

int main()
{
    int n; cin >> n;
    vector<int> a(d);
    int x, y;
    int mx = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a[x] = y;
        mx = max(mx, x);
    }
    int r = 0, b = 0, cnt = 0, s = 0; y = 0;
    for(int i = 0; i < mx; i++)
    {
        if(a[i] == 1) r++, cnt++;
        else if(a[i] == 2) y++, cnt++;
        else if(a[i] == 3) b++, cnt++;
        if((r > 0 or y > 0 or b > 0) and a[i] == 0) cnt++;
        if(r > 0 and y > 0 and b > 0) 
        {
            s = max(s, cnt);
            cnt = r = y = b = 0;
        }
    }
    if(r > 0 and y > 0 and b > 0) 
    {
        s = max(s, cnt);
        cnt = r = y = b = 0;
    }

    cout << s - 1;
}