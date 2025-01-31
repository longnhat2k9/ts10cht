#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("spec.inp", "r", stdin);
    freopen("spec.out", "w", stdout);
    
    int n; cin >> n;
    vector<int>a(n);
    int mx = 0, m = 1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i < n; i++)
    {
        if((a[i - 1] < 0 and a[i] < 0) or (a[i - 1] > 0 and a[i] > 0))
        {
            m++;
            mx = max(mx, m);
        }
        else
        {
            m = 1;
        }
    }
    if(a[n - 1] != 0) mx = max(mx, m);
    cout << mx;
}
