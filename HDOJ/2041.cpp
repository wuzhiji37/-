#include <iostream>
using namespace std;
int main()
{__int64 a[41];int n;
a[1]=1;a[2]=1;for(int i=3;i<=40;i++){a[i]=a[i-1]+a[i-2];}
cin>>n;
for(int i=1;i<=n;i++){cin>>a[0];cout<<a[a[0]]<<endl;}
return 0;
}
