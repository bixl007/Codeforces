// 2155A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int winner = n, loser = 0, match = 0;

    while(winner > 1 || loser > 1) {
        if(winner > 1) {
            int x = winner / 2;
            match += x;
            winner -= x;
            loser += x;
        }
        if(loser > 1) {
            int x = loser / 2;
            match += x;
            loser -= x;
        }
    }

    cout << match + 1 << endl;

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