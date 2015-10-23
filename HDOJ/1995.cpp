#include <iostream>
using namespace std;
int main()
{unsigned __int64 a[61],x,y;
a[0]=1;for(int i=1;i<=60;i++){a[i]=a[i-1]*2;}cin>>x;
while(cin>>x>>y){cout<<a[x-y]<<endl;}
return 0;
}
