#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int a, b, c;
    cin >> a >> b >> c;

    int anna = a;
    int katie = b;

    anna += (c + 1) / 2;
    katie += c / 2;

    if(anna > katie) {
        cout << "First" << endl;
    }
    else {
        cout << "Second" << endl;
    }
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