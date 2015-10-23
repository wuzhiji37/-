#include <iostream>
#include <iomanip>
using namespace std;
int main()
{int n,x,y,z,d;double a,b,c;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>x>>y>>z;
a=x%12*30+y*0.5+z/120.0;
b=y*6+z*0.1;
c=a-b;
if(c<0)c=-c;
if(c>180)c=360-c;d=(int)c;
cout<<fixed<<setprecision(0)<<d<<endl;}
return 0;
}
