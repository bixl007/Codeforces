#include <bits/stdc++.h>
using namespace std;

void sol()
{
    long long n;
    cin >> n;

    while (n % 2 == 0)
        n /= 2;

    if (n > 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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