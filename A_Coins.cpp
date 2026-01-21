#include <bits/stdc++.h>
using namespace std;

void sol()
{
    long long n, k;
    cin >> n >> k;

    if (n % 2 == 0 || (n - k) % 2 == 0)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
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