// 快速幂
//  a = 2   b = 13
//  a ^ b = 2 ^ {1101}   13 = 8 + 4 + 1   2 ^ 8 * 2 ^ 4 * 2 ^ 1

// res = 1        a = 2 ^ 1       b = 1101
// ----> 开始
// res = 2        a = 2 ^ 2       b = 0110
// res = 2        a = 2 ^ 4       b = 0011
// res = 2 ^ 5    a = 2 ^ 8       b = 0001
// res = 2 ^ 13   a = 2 ^ 16      b = 0000

#include <bits/stdc++.h>
using namespace std;

#define mod 998244353
using ll = long long;

ll a, b;

ll ksm(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> a >> b;
    cout << ksm(a, b) % mod << '\n';
    return 0;
}