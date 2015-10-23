#include <iostream>
using namespace std;
int main()
{int n,a[101][3];
while(cin>>n && n!=0)
{for(int i=1;i<=n;++i){cin>>a[i][1];
if(a[i][1]<0){a[i][1]=-a[i][1];a[i][2]=-1;}else a[i][2]=1;}
for(int i=n;i>=2;--i)
{for(int j=i-1;j>=1;--j)
{if(a[i][1]>a[j][1]){a[0][1]=a[i][1];a[i][1]=a[j][1];a[j][1]=a[0][1];
                     a[0][2]=a[i][2];a[i][2]=a[j][2];a[j][2]=a[0][2];}
}}
cout<<a[1][1]*a[1][2];
for(int i=2;i<=n;++i){cout<<' '<<a[i][1]*a[i][2];}
cout<<endl;
}
return 0;
}
