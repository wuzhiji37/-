#include <iostream>
using namespace std;
int main()
{__int64 n,a[7];
cin>>n;
for(int i=1;i<=n;i++)
{for(int j=1;j<=3;j++){cin>>a[j];}
for(int j=4;j<=6;j++){cin>>a[0];a[j-3]=a[j-3]+a[0];}
a[2]=a[2]+a[3]/60;a[3]=a[3]%60;
a[1]=a[1]+a[2]/60;a[2]=a[2]%60;
cout<<a[1]<<' '<<a[2]<<' '<<a[3]<<endl;}
return 0;
}
