#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int first = -1, last = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            if (first == -1)
            {
                first = i;
            }
            last = i;
        }
    }

    if (first == -1)
    {
        cout << 0 << endl;
        return;
    }

    bool check = 0;
    for (int i = first; i <= last; i++)
    {
        if (arr[i] == 0)
        {
            check = true;
            break;
        }
    }

    if (check)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 1 << endl;
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