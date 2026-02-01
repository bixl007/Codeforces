#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    string st;
    cin >> st;

    int cnt = 1, maxi = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if(st[i] == st[i + 1])
            cnt++;
        else {
            maxi = max(maxi, cnt);
            cnt = 1;
        }
    }

    maxi = max(maxi, cnt);
    maxi += 1;

    cout << maxi << endl;
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