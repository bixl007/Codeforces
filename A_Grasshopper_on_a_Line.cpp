#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n, x;
    cin >> n >> x;

    if (n % x == 0)
    {
        cout << 2 << endl;
        cout << 1 << " " << n - 1 << endl;
    }
    else
    {
        cout << 1 << endl;
        cout << n << endl;
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