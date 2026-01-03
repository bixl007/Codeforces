#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n, k;
    cin >> n >> k;

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == k)
            flag = true;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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