#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n, k;
    cin >> n >> k;

    string st;
    cin >> st;

    vector<int> freq(26, 0);

    for(char ch : st)
        freq[ch - 'a']++;
    
    int odd = 0;
    for(int i : freq) {
        odd += i % 2;
    }

    if(odd > k + 1)
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