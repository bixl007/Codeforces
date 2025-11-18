// 1903A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            counter++;
    }

    if (k == 1 && counter)
        cout << "NO" << endl;
    else if (k == 0 && counter)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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