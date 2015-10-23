#include <iostream>
#include <iomanip>
using namespace std;
int main()
{__int64 n,m,num;float a[51][6];
while(cin>>n>>m)
{num=0;for(int i=0;i<=n;++i){for(int j=0;j<=m;++j){a[i][j]=0;}}
for(int i=1;i<=n;++i){for(int j=1;j<=m;++j)
{cin>>a[i][j];a[i][0]=a[i][0]+a[i][j];a[0][j]=a[0][j]+a[i][j];}}
for(int i=1;i<=n;++i){a[i][0]=a[i][0]/m;}for(int i=1;i<=m;++i){a[0][i]=a[0][i]/n;}
cout<<fixed<<setprecision(2)<<a[1][0];
for(int i=2;i<=n;++i){cout<<' '<<a[i][0];}cout<<endl;
cout<<fixed<<setprecision(2)<<a[0][1];
for(int i=2;i<=m;++i){cout<<' '<<a[0][i];}cout<<endl;
for(int i=1;i<=n;++i)
{if((a[i][1]>=a[0][1]) &&(a[i][2]>=a[0][2]) &&(a[i][3]>=a[0][3])
 &&(a[i][4]>=a[0][4]) &&(a[i][5]>=a[0][5]))++num;}
cout<<num<<endl<<endl;
}
return 0;
}
