//  #include <bits/stdc++.h>
 
//  using namespace std;
 
//  int main()
 
//  {
//  int n;
//  cin>>n;
 
//  for(int i=1;i<=n;i++)
//  {
//     int space=n-i;
//     while(space)
//     {
//     cout<<" ";
//     space=space-1 ;
//     }
//     for(int j=1;j<=i;j++)
//     {
//        cout<<"*";
//     }
//     cout<<endl;
//  }
    
 
//     return 0;
//  } 


#include <bits/stdc++.h>

using namespace std;

int main()

{
 int n;
 cin>>n;
 
 for(int i=1;i<=n;i++)
 {
    int space=i-1;
    while(space)
    {
    cout<<" ";
    space=space-1 ;
    }
    for(int j=1;j<=n-i+1;j++)
    {
       cout<<"*";
    }
    cout<<endl;
 }
    return 0;
}