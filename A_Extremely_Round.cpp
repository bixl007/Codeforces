#include <bits/stdc++.h>
using namespace std;

vector<int> nums;
bool checker(int n)
{
    int zero = 0, dig = 0;
    while (n)
    {
        int rem = n % 10;
        if (rem == 0)
            zero++;
        dig++;
        n /= 10;
    }

    return zero == dig - 1;
}

void precompute()
{
    for (int i = 1; i <= 999999; i++)
    {
        if (checker(i))
            nums.push_back(i);
    }
}

void sol()
{
    int n;
    cin >> n;

    
    int cnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] <= n)
        cnt++;
        else
        break;
    }
    
    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCaseInp;
    cin >> testCaseInp;
    precompute();
    
    while (testCaseInp--)
    {
        sol();
    }

    return 0;
}