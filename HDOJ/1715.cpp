#include <iostream>
using namespace std;
int main()
{short a[1001][251],n,m,k;
for(int i=1;i<=1000;i++){for(int j=1;j<=250;j++){a[i][j]=0;}}
a[1][1]=1;a[2][1]=1;
for(int i=3;i<=1000;i++)
{for(int j=1;j<=250;j++){a[i][j]=a[i-1][j]+a[i-2][j];}
for(int j=1;j<=249;j++){a[i][j+1]=a[i][j+1]+a[i][j]/10;a[i][j]=a[i][j]%10;}}
cin>>n;
for(int i=1;i<=n;i++)
{cin>>m;
for(int j=250;j>0;j--){if(a[m][j]!=0){k=j;break;}}
for(int j=k;j>0;j--){cout<<a[m][j];}cout<<endl;}
return 0;
}
