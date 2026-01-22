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

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] & 1)
        {
            cnt--;
            while (i < n && arr[i] & 1)
            {
                cnt++;
                i++;
            }
        }
        else
        {
            cnt--;
            while (i < n && !(arr[i] & 1))
            {
                cnt++;
                i++;
            }
        }
        i--;
    }
    cout << cnt << endl;
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