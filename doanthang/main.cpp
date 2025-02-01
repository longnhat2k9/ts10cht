#include<bits/stdc++.h>
using namespace std;

const int d = 1e6;

int main()
{
    freopen("ppoint.inp", "r", stdin);
    freopen("ppoint.out", "w", stdout);

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
    int c = 0, b = 0, cnt = 0, s = d; y = 0;
    int l = 0, r = 0;
    while(r < mx)
    {
        if(a[r] == 1) c++;
        else if(a[r] == 2) b++;
        else if(a[r] == 3) y++;

        cnt++;
        while(c > 0 and y > 0 and b > 0) 
        {
            s = min(s, cnt);
            if(a[l] == 1) c--;
            else if(a[l] == 2) b--;
            else if(a[l] == 3) y--;
            cnt--; l++;
        }
        r++;
    }
    if(c > 0 and y > 0 and b > 0) 
    {
        s = min(s, cnt);
        cnt = r = y = b = 0;
    }

    if(s != d) cout << s - 1;
    else cout << -1;
}
