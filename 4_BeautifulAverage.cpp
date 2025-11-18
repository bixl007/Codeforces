// 2161A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        maxi = max(x, maxi);
    }

    cout << maxi << endl;
    
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