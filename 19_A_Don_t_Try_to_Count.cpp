#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;

    if (x.find(s) != string::npos)
    {
        cout << 0 << endl;
        return;
    }

    int cnt = 0;

    while (x.size() < s.size() * 2 || cnt < 1)
    {
        x = x + x;
        cnt++;
        if (x.find(s) != string::npos)
        {
            cout << cnt << endl;
            return;
        }

    }

    cout << -1 << endl;
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