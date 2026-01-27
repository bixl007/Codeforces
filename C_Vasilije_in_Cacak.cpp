#include <bits/stdc++.h>
using namespace std;

void sol()
{
    long long n, k, x;
    cin >> n >> k >> x;

    long long sum = k * (k + 1), dec = 1;

    long long mini = (k * (k + 1)) / 2;

	long long maxi = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

    if(x >= mini && x <= maxi) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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