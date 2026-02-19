#include <bits/stdc++.h>
using namespace std;

int minOps(string &s, string &ops)
{
    int idx = 1, cnt = 0;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ops[idx])
        {
            idx--;
            if (idx < 0)
                break;
        }
        else
        {
            cnt++;
        }
    }

    if (idx >= 0)
        cnt = 1e9;

    return cnt;
}

void sol()
{
    string n;
    cin >> n;
    
    vector<string> ops = {"00", "25", "50", "75"};

    int res = 1e9;
    for (string i : ops)
    {
        res = min(res, minOps(n, i));
    }

    cout << res << endl;
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