#include<bits/stdc++.h>
using namespace std;

const int d = 1e9;

int main()
{
    freopen("ppoint.inp", "r", stdin);
    freopen("ppoint.out", "w", stdout);

    int n; cin >> n;
    vector<pair<int, int>>a(n);
    for(int i = 0; i < n; i++)
    {
        int x, y; cin >> x >> y;
        a[i] = make_pair(x, y);
    }
    sort(a.begin(), a.end());
    int l, r, m1, m2, m3, mn = d;
    l = r = m1 = m2 = m3 = 0;

    while(r < n)
    {
        if(a[r].second == 1) m1++;
        else if(a[r].second == 2) m2++;
        else if(a[r].second == 3) m3++;

        while(m1 > 0 and m2 > 0 and m3 > 0 and l <= r)
        {
            mn = min(mn, a[r].first - a[l].first);
            if(a[l].second == 1) m1--;
            else if(a[l].second == 2) m2--;
            else if(a[l].second == 3) m3--;
            l++;
        }
        r++;
    }

    if(mn != d) cout << mn;
    else cout << -1;
}