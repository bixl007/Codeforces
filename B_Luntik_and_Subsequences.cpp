#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    int ones = 0, zeros = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 1)
            ones++;
        if (x == 0)
            zeros++;
    }
    long long res = pow(2, zeros) * ones;
    cout << res << endl;
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