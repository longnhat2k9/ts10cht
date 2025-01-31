#include<bits/stdc++.h>
using namespace std;

bool nto(long long n)
{
    if(n == 1) return false;
    for(long long i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

void cs(long long n)
{
    long long sum = 0, x;
    while(n != 0)
    {
        x = n%10;
        n = n/10;
        sum += x * x;
    }
    if(nto(sum)) cout << 1 << endl;
    else cout << -1 << endl;
    cout << sum << endl;
}

int main()
{
    freopen("bnum.inp", "r", stdin);
    freopen("bnum.out", "w", stdout);
    long long n; cin >> n; cs(n);
}
