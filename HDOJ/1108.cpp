#include <iostream>
using namespace std;
int Lcm(long x,long y)
{long x0,y0,z;x0=x;y0=y;
if(x0<y0){z=x0;x0=y0;y0=z;};
while(x0%y0!=0){x0=x0%y0;if(x0<y0){z=x0;x0=y0;y0=z;}}
return x/y0*y;}    
int main()
{long a,b;
while(cin>>a>>b)
{cout<<Lcm(a,b)<<endl;}
return 0;
}
