// 2163A
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> freq(n + 1, 0);
    int min_val = 101;
    int max_val = -1;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
        if (x < min_val)
            min_val = x;
        if (x > max_val)
            max_val = x;
    }

    vector<int> odds;
    for (int i = 1; i <= n; i++)
    {
        if (freq[i] % 2 != 0)
        {
            odds.push_back(i);
        }
    }

    if (n % 2 != 0)
    {
        if (odds.size() == 1 && odds[0] == min_val)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        if (odds.empty())
        {
            if (min_val == max_val)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (odds.size() == 2)
        {
            if (odds[0] == min_val && odds[1] == max_val)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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