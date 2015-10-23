#include <iostream>
using namespace std;
int Lcm(long x,long y)
{long x0,y0,z;x0=x;y0=y;
if(x0<y0){z=x0;x0=y0;y0=z;};
while(x0%y0!=0){x0=x0%y0;if(x0<y0){z=x0;x0=y0;y0=z;}}
return x/y0*y;}    
int main()
{int n;long a[10001];
while(cin>>n)
{for(int i=1;i<=n;i++){cin>>a[i];}
for(int i=2;i<=n;i++){a[1]=Lcm(a[1],a[i]);}
cout<<a[1]<<endl;}
return 0;
}
