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

    unordered_map<int, int> freq;

    for (int x : arr)
    {
        freq[x]++;
    }

    int ans = 0;

    for (auto it : freq)
    {
        int val = it.first;
        int cnt = it.second;

        if (cnt < val)
        {
            ans += cnt;
        }
        else
        {
            ans += (cnt - val);
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        sol();
    }

    return 0;
}