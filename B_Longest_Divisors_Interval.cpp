#include <bits/stdc++.h>
using namespace std;

void sol()
{
    long long n;
    cin >> n;

    int i = 1;
    while (n % i == 0)
        i++;

    cout << i - 1 << endl;
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