#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n, k;

    cin >> n >> k;
    int res = INT_MAX;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int x = arr[i];

        int temp = x % k;
        if(temp == 0) {
            res = 0;
        }
        int temp1 = ((x + k) / k) * k - x;

        res = min(res, abs(temp1));
    }

    if (k == 4) {
        int even_cnt = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) even_cnt++;
        }
        res = min(res, max(0, 2 - even_cnt));
    }

    cout << res << endl;
    
    
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