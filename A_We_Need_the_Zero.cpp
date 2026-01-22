#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res = arr[0];

    for (int i = 1; i < n; i++)
    {
        res ^= arr[i];
    }

    if (n & 1)
    {
        cout << res << endl;
    }
    else
    {
        if (res == 0)
        {
            cout << res << endl;
        }
        else
        {
            cout << -1 << endl;
        }
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