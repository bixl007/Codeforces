#include <bits/stdc++.h>
using namespace std;

void sol()
{
    long long n;
    cin >> n;

    long long cnt = 0;

    while (n % 3 == 0)
    {
        if (n % 6 == 0)
        {
            n /= 6;
        }
        else
        {
            n *= 2;
        }
        cnt++;
    }

    if (n == 1)
    {
        cout << cnt << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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