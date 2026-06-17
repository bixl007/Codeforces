#include <bits/stdc++.h>
using namespace std;

void sol()
{
    long long n;
    cin >> n; 

    vector<long long> arr(n);
    unordered_map<long long, long long> mpp;

    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    long long maxi = INT_MIN;

    for(auto i : mpp)
    {
        maxi = max(maxi, i.second);
    }

    long long ops = 0;
    while(maxi < n) {
        ops++;
        if(maxi * 2 < n) {
            ops += maxi;
            maxi *= 2;
        }
        else {
            ops += n - maxi;
            maxi = n;
        }
    }

    cout << ops << endl;
    
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