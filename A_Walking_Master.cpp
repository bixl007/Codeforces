#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(d < b) {
        cout << -1 << endl;
        return ;
    }

    int moves = d - b;
    a += moves;
    if(a < c) {
        cout << -1 << endl;
        return ;
    }

    moves += (a - c);

    cout << moves << endl;
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