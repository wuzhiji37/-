#include <iostream>
using namespace std;
int main()
{__int64 a[21],b[21],n,x,y;
a[0]=0;a[1]=0;a[2]=1;for(int i=3;i<=20;i++){a[i]=(i-1)*(a[i-1]+a[i-2]);}
b[0]=1;for(int i=1;i<=20;i++){b[i]=b[i-1]*i;}
cin>>n;
for(int i=1;i<=n;i++){cin>>x>>y;cout<<b[x]/b[y]/b[x-y]*a[y]<<endl;}
return 0;
}
