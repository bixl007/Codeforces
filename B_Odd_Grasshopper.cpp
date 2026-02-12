#include <bits/stdc++.h>
using namespace std;

void sol()
{
    long long x, n;

    cin >> x >> n;

    long long final = 0;
    if (n % 4 == 1)
        final = -n;
    else if (n % 4 == 2)
        final = 1;
    else if (n % 4 == 3)
        final = n + 1;
    else if (n % 4 == 0)
        final = 0;

    if (x % 2 == 0)
        final = x + final;
    else
        final = x - final;
    cout << final << endl;
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