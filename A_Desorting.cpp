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

    int diff = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            diff = min(diff, arr[i] - arr[i - 1]);
        }
        else {
            cout << 0 << endl;
            return ;
        }
    }
    
    cout << (diff + 2) / 2 << endl;
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