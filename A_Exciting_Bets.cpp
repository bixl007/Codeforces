#include <bits/stdc++.h>
using namespace std;

void sol()
{
    long long a, b;
    cin >> a >> b;

    if (b > a)
        swap(a, b);

    if (a == b)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }

    long long gcd = a - b;

    long long moves = min(b % gcd, gcd - b % gcd);

    cout << gcd << " " << moves << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCaseInp;
    cin >> testCaseInp;

    while (testCaseInp--)
    {
        sol();
    }

    return 0;
}