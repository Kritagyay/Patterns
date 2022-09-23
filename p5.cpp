// #include <bits/stdc++.h>

// using namespace std;

// int main()

// {
// int n;
// cin>>n;
// int row =1;
// while (row<=n)
// {
//     int col=1;
//     int value =row;
//     while (col<=row)
//     {
//         cout<<value<<" ";
//         value++;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int value = i;

        for (int j = 1; j <= i; j++)
        {

            cout << j+i-1<< " ";
           // value++;
            // cout<<endl;
        }
        cout << endl;
    }
    return 0;
}
