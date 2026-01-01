#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;

    if (st.find("...") != string::npos)
    {
        cout << 2 << endl;
    }
    else
    {
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (st[i] == '.')
                cnt++;
        }
        cout << cnt << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ts;
    cin >> ts;

    while (ts--)
    {
        solve();
    }

    return 0;
}