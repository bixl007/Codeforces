// 1917B

#include <bits/stdc++.h>
using namespace std;

int countDistinct(string st, int n, unordered_map<string, bool> &dp) {
    if(n <= 0)
        return 0;
    if(dp[st])
        return 0;

    string temp1 = st;
    string temp2 = st;
    temp1.erase(0, 1);
    temp2.erase(0, 1);
    dp[temp1] = true;
    dp[temp2] = true;
    
    int first = 1 + countDistinct(temp1, n - 1, dp);
    int second = 1 + countDistinct(temp2, n - 1, dp);

    return first + second;
}

void solve() {
    int n;
    cin >> n;
    string st;
    cin >> st;
    unordered_map<string, bool> dp;

    int res = countDistinct(st, n, dp);

    cout << dp.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;

    while(tc--) {
        solve();
    }
}