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

    int diff = abs(1 - arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        diff = gcd(diff, abs(arr[i] - (i + 1)));
    }
    
    cout << diff << endl;
    
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