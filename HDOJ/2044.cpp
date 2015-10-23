#include <iostream>
using namespace std;
int main()
{__int64 a[51],s,t,n;
a[1]=1;a[2]=1;for(int i=3;i<=50;i++){a[i]=a[i-1]+a[i-2];}
cin>>n;
for(int i=1;i<=n;i++){cin>>s>>t;cout<<a[t-s+1]<<endl;}
return 0;
}
