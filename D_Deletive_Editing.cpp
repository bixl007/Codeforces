#include <bits/stdc++.h>
using namespace std;

void sol()
{
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    vector<int> freq(26, 0);

    for (char ch : t)
    {
        freq[ch - 'A']++;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (freq[s[i] - 'A'] > 0)
            freq[s[i] - 'A']--;
        else
            s[i] = '.';
    }

    string res = "";

    for (char ch : s)
    {
        if (ch != '.')
            res += ch;
    }

    bool ans = res == t;
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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