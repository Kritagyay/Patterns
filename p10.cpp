#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cin >> n;
    char ch;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            ch = 'A';
            ch = ch + i+j-2;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}