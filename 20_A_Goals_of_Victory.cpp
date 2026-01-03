#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    int ans = 0 - sum;

    cout << ans << endl;
    
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