#include <iostream>
using namespace std;
int main()
{unsigned __int64 a[21],b[21];
a[0]=0;for(int i=1;i<=20;i++){a[i]=a[i-1]*3+2;}
b[0]=0;for(int i=1;i<=20;i++){b[i]=a[i-1]+b[i-1]+1;}cin>>a[0];
while(cin>>a[0]){cout<<2*b[a[0]-1]+2<<endl;}
return 0;
}
