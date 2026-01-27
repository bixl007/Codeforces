#include <bits/stdc++.h>
using namespace std;

void sol()
{
    long long a, b, n;
    cin >> a >> b >> n;

    long long sum = b;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        sum += min(x, a);
        if(x >= a)
            sum--;
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