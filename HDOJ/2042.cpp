#include <iostream>
using namespace std;
int main()
{__int64 a[31],n;
a[0]=3;for(int i=1;i<=30;i++){a[i]=(a[i-1]-1)*2;}
cin>>n;
for(int i=1;i<=n;i++){cin>>a[0];cout<<a[a[0]]<<endl;}
return 0;
}
