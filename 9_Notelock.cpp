// 2154A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    string st;
    cin >> n >> k >> st;

    int j = 0, oneCnt = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == '1')
        {
            oneCnt++;
        }
        if (i - k + 1 > 0)
        {
            if (st[j] == '1')
                oneCnt--;
        }
        if (st[i] == '1' && oneCnt == 1)
            cnt++;
        if (i - k >= 0)
        {
            j++;
        }
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
}