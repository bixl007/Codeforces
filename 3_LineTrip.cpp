// 1901A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    int temp;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            temp = arr[i];
        }
        else
        {
            temp = abs(arr[i] - arr[i - 1]);
        }

        ans = max(ans, temp);
    }

    temp = 2 * abs(x - arr[n - 1]);
    ans = max(ans, temp);

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }
}