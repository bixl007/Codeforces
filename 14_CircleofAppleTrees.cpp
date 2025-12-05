// 2153A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int initial = arr[0];
    int cnt = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > initial && arr[i] != arr[i - 1])
            cnt++;
    }

    cout << cnt << endl;
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

    return 0;
}