#include <bits/stdc++.h>
using namespace std;

void sol()
{
    long long n, k;
    cin >> n >> k;

    long long sz = n * k;
    vector<long long> arr(sz);

    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }

    long long pointer = n * k, sum = 0;
    
    while(k--) {
        pointer -= n / 2 + 1;
        sum += arr[pointer];
    }

    cout << sum << endl;
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