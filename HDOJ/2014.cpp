#include <iostream>
#include <iomanip>
using namespace std;
int main()
{int a;double b,s,max,min;
while(cin>>a)
{s=0;max=0;min=100;
for(int i=1;i<=a;++i)
{cin>>b;s=s+b;
if(b>max)max=b;
if(b<min)min=b;}
s=(s-max-min)/(a-2);
cout<<fixed<<setprecision(2)<<s<<endl;}
return 0;
}
