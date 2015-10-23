#include <iostream>
using namespace std;
int main()
{int a[31][31],s;
while(cin>>s)
{for(int i=1;i<=s;++i){a[i][1]=1;a[i][i]=1;}
for(int i=3;i<=s;++i)
{for(int j=2;j<=i-1;++j){a[i][j]=a[i-1][j-1]+a[i-1][j];}}
for(int i=1;i<=s;++i)
{cout<<1;
for(int j=2;j<=i;++j){cout<<' '<<a[i][j];}
cout<<endl;}
cout<<endl;}
return 0;
}
