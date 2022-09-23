#include <bits/stdc++.h>

using namespace std;

int main()

{
int n ;
cin >>n;
for(int i=1;i<=n;i++)
{
    int space=n-i;
    while(space )
    {
        cout<<" ";
        space--;
    }
    for(int j=1;j<=i;j++)
    {
        cout<<j;
    }
    int start=i-1;
    while(start)
    {
        cout<<start;
        start--;
    }
    
    cout<<endl;
}
    

    return 0;
}