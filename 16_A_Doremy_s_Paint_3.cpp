#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mpp[x]++;
    }

    if (mpp.size() > 2)
    {
        cout << "No" << endl;
        return;
    }

    if (mpp.size() == 2)
    {
        int c1 = mpp.begin()->second;
        int c2 = mpp.rbegin()->second;

        if (abs(c1 - c2) > 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    else
    {
        cout << "Yes" << endl;
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