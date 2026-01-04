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

    vector<int> b, c;
    sort(arr.begin(), arr.end());

    if (arr[0] == arr[n - 1])
    {
        cout << -1 << endl;
        return;
    }

    int maxi = arr[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxi)
            c.push_back(arr[i]);
        else
            b.push_back(arr[i]);
    }

    cout << b.size() << " " << c.size() << endl;

    for (auto i : b)
    {
        cout << i << " ";
    }

    cout << endl;
    for (auto i : c)
    {
        cout << i << " ";
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