#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin>>n;
int count =1;
for (int i = 0; i <n; i++)
{
    /* code */for (int j= 0; j < i; j++)
    {
        /* code */cout<<count<<" ";
                  count++;
    }
    cout<<endl;
    
}
    

    return 0;
}