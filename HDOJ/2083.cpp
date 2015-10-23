#include <iostream>
using namespace std;
int main()
{int n,m,a[501];
cin>>n;
for(int i=1;i<=n;i++)
{cin>>m;for(int j=1;j<=m;j++){cin>>a[j];}
for(int j=1;j<=m-1;j++){for(int k=j+1;k<=m;k++){if(a[j]>a[k]){a[0]=a[j];a[j]=a[k];a[k]=a[0];}}}
a[0]=0;for(int j=1;j<=m/2;j++){a[0]=a[0]+a[m-j+1]-a[j];}cout<<a[0]<<endl;
}
return 0;
}
