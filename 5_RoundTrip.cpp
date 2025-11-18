// 2161A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long r, x, d; 
    int n;
    string st;
    cin >> r >> x >> d >> n >> st;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (st[i] == '1' || r < x) {
            cnt++;
            r = max(r - d, 0ll);
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