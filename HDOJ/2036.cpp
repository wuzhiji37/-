#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{int n;double a,b,c,p,s;__int64 x[101],y[101];
while(cin>>n && n!=0)
{s=0;for(int i=1;i<=n;i++){cin>>x[i]>>y[i];}
for(int i=2;i<=n-1;i++)
{a=sqrt((x[i]-x[1])*(x[i]-x[1])+(y[i]-y[1])*(y[i]-y[1]));
b=sqrt((x[i+1]-x[1])*(x[i+1]-x[1])+(y[i+1]-y[1])*(y[i+1]-y[1]));
c=sqrt((x[i+1]-x[i])*(x[i+1]-x[i])+(y[i+1]-y[i])*(y[i+1]-y[i]));
p=(a+b+c)/2;s=s+sqrt(p*(p-a)*(p-b)*(p-c));}
cout<<fixed<<setprecision(1)<<s<<endl;}
return 0;
}
