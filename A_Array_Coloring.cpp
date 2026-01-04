#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if(x & 1)
            odd++;
    }

    if(odd & 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    
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