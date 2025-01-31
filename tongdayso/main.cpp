#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("sums.inp", "r", stdin);
    freopen("sums.out", "w", stdout);
    int n; cin >> n; long long sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += 2*i + 1;
    } 
    cout << sum;
}
