#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int m;
    cin >> m;

    vector<long long> pref1(n + 1);

    for (int i = 0; i < n; i++)
    {
        pref1[i + 1] = pref1[i] + nums[i];
    }

    sort(nums.begin(), nums.end());
    vector<long long> pref2(n + 1);

    for (int i = 0; i < n; i++)
    {
        pref2[i + 1] = pref2[i] + nums[i];
    }

    for(int i = 0; i < m; i++) {
        int tp, l, r;
        cin >> tp >> l >> r;

        if(tp == 1) {
            cout << pref1[r] - pref1[l - 1] << endl;
        }
        else {
            cout << pref2[r] - pref2[l - 1] << endl;
        }
    }

    return 0;
}