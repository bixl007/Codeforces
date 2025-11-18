// 2614A
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, maxi = INT_MIN, mini = INT_MAX;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    int x;
    cin >> x;

    if (x >= mini && x <= maxi)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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