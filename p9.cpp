#include <bits/stdc++.h>

using namespace std;

int main()

{
int n;
cin>>n;
char ch;
int count=1;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
{ch='A';
ch=ch+count-1;
cout<<ch<<" ";
count++;
}
cout<<endl;
}
    return 0;
}