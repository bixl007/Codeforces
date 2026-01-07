#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    int sum = 0, cnt = 0, pCnt = 0, nCnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            pCnt++;
        }
        else
            nCnt++;
    }

    while (pCnt < nCnt || nCnt & 1)
    {
        nCnt--;
        cnt++;
        pCnt++;
    }

    cout << cnt << endl;
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