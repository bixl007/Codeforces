#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int l = 0, r = n - 1;

    while (l < r && str[l] != str[r])
    {
        l++, r--;
    }

    cout << r - l + 1 << endl;
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