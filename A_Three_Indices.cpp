#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n - 1; i++)
    {
        int l = -1, r = -1;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                l = j;
                break;
            }
        }

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                r = j;
                break;
            }
        }

        if (l != -1 && r != -1)
        {
            cout << "YES" << endl;
            cout << l + 1 << ' ' << i + 1 << ' ' << r + 1 << endl;
            return ;
        }
    }

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