#include <bits/stdc++.h>


using namespace std;

int main()

{
int n;
cin>>n;
for (int i = n; i >=1; i--)
{         
     for(int space=n-i;space>0;space--)
        cout<<"*";
    for (int j =i; j >0; j--)
    { 
        cout<<j;
    }
   
    cout<<endl;
    
}


    return 0;
}




