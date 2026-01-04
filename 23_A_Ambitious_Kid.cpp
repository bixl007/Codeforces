#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int mini = 1e9;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mini = min(mini, abs(x));
    }

    cout << mini << endl;

    return 0;
}