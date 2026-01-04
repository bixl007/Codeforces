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

    vector<int> res;
    res.push_back(arr[0]);

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            res.push_back(arr[i]);
        res.push_back(arr[i]);
    }

    cout << res.size() << endl;

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    cout << endl;
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