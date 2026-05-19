#include <bits/stdc++.h>
using namespace std;

void sol()
{
    string s;
    cin >> s;

    int zero = 0, one = 0;

    for (char ch : s)
    {
        if (ch == '0')
            zero++;
        else
            one++;
    }

    int mini = min(zero, one);

    if (mini & 1)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NET" << endl;
    }
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