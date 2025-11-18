// 2160A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int mex = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == mex) {
            mex++;
        }
        else if(arr[i] > mex)
            break;
    }

    cout << mex << endl;
    
    
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