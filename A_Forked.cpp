#include <bits/stdc++.h>
using namespace std;

vector<int> dx = {-1, 1, -1, 1}, dy = {-1, -1, 1, 1};

void sol()
{
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;

    set<pair<int, int>> king, queen;

    for (int i = 0; i < 4; i++)
    {
        king.insert({xk + dx[i] * a, yk + dy[i] * b});
        king.insert({xk + dx[i] * b, yk + dy[i] * a});

        queen.insert({xq + dx[i] * a, yq + dy[i] * b});
        queen.insert({xq + dx[i] * b, yq + dy[i] * a});
    }

    int ans = 0;

    for (auto i : king)
    {
        if (queen.find(i) != queen.end())
            ans++;
    }

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