#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if(n == 1) {
        cout << 0 << endl;
        return ;
    }

    int cnt = 0;
    for(int i = n - 2; i >= 0; i--) {
        while(arr[i] >= arr[i + 1]) {
            arr[i] /= 2;
            cnt++;
            if(arr[i] == 0)
            break;
        }

        if(arr[i] == 0 && arr[i + 1] == 0) {
            cout << -1 << endl;
            return ; 
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