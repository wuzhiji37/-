#include <iostream>
using namespace std;
int main()
{int a[61];
a[1]=1;a[2]=2;a[3]=3;
while(cin>>a[0]&&a[0]!=0)
{for(int i=4;i<=a[0];++i)
{a[i]=a[i-1]+a[i-3];}
cout<<a[a[0]]<<endl;}
return 0;
}
