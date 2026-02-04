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

    int res = arr[n - 1] - arr[0];

    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i] - arr[0]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        res = max(res, arr[n - 1] - arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        res = max(res, arr[i] - arr[i + 1]);
    }

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