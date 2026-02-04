#include <bits/stdc++.h>
using namespace std;

void sol()
{
    long long n;
    cin >> n;

    if (n & 1 || n < 4)
    {
        cout << -1 << endl;
        return;
    }

    long long mini = (n + 5) / 6;
    long long maxi = n / 4;

    cout << mini << " " << maxi << endl;
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