#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    long long total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + arr[i];
    }

    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        long long old = pref[r] - pref[l - 1];
        long long updated = (long long)(r - l + 1) * k;
        long long final = total - old + updated;

        if (final % 2 != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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