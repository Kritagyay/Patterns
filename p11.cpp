#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cin >> n;
    char ch;

    for (int i = 1; i <= n; i++)
    {
        ch = 'A' + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}