#include <bits/stdc++.h>
using namespace std;

void sol()
{
    long long n, x;
    cin >> n >> x;

    long long mini = 0, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        maxi += (num + x - 1) / x;
        mini += num;
    }

    mini = (mini + x - 1) / x;

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