#include <bits/stdc++.h>
using namespace std;

void sol()
{

    vector<string> arr(10);

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i][j] == 'X')
            {
                // if (i == 0 || i == 9 || j == 0 || j == 9)
                // cnt += 1;
                // else if ((i == 1 && j >= i) || (j == 1 && i >= 1) || (i == 8 && j <= 8) || (j == 8 && i <= 8))
                // cnt += 2;
                // else if ((i == 2 && j >= i) || (j == 2 && i >= 2) || (i == 7 && j <= 7) || (j == 7 && i <= 7))
                // cnt += 3;
                // else if ((i == 3 && j >= i) || (j == 3 && i >= 3) || (i == 6 && j <= 6) || (j == 6 && i <= 6))
                // cnt += 4;
                // else if ((i == 4 && j >= i) || (j == 4 && i >= 4) || (i == 5 && j <= 5) || (j == 5 && i <= 5))
                // cnt += 5;

                int verticalDist = min(i, 9 - i);
                int horizontalDist = min(j, 9 - j);
                cnt += min(verticalDist, horizontalDist) + 1;
            }
        }
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