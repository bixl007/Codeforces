#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    sort(arr.begin(), arr.end());

    int maxi = 1, cnt = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] <= k)
            cnt++;
        else
        {
            maxi = max(maxi, cnt);
            cnt = 1;
        }
    }

    maxi = max(maxi, cnt);

    cout << n - maxi << endl;
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