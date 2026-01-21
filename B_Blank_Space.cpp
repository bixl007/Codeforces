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

    int maxi = 0;
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            temp++;
        else
            temp = 0;
        maxi = max(maxi, temp);
    }

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