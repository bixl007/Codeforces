#include <bits/stdc++.h>
using namespace std;

void sol()
{
    string s;
    cin >> s;
    int n = s.length();

    if (s[0] != s[n - 1])
    {
        if (s[0] == 'a')
            s[0] = 'b';
        else
            s[0] = 'a';
    }

    cout << s << endl;
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