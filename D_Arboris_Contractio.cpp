#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (n == 2)
    {
        cout << 0 << endl;
        return;
    }

    int totalLeaves = 0;

    vector<int> leaf(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        if (adj[i].size() == 1)
        {
            leaf[i] = 1;
            totalLeaves++;
        }
    }

    int maxi = 0;

    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;

        if (!leaf[i])
        {
            for (int j : adj[i])
            {
                if (leaf[j])
                {
                    cnt++;
                }
            }
        }

        maxi = max(maxi, cnt);
    }

    cout << totalLeaves - maxi << endl;
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