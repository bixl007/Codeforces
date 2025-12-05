// 2166A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    int i = n - 2, cnt = 0;
    while (i >= 0)
    {
        if (st[n - 1] != st[i])
        {
            cnt++;
        }
        i--;
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