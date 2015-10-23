#include <iostream>
using namespace std;
int main()
{double t=12.00/11,x,y,s[24];int a,b,c,d,m,n;
for(int i=0;i<=23;i++){s[i]=i*t;}
while(cin>>a>>b>>c>>d &&(a!=0||b!=0||c!=0||d!=0))
{x=a+(double)b/60;y=c+(double)d/60;
if(x>=12&&y>=12){x-=12;y-=12;}
if(x>=y)y+=12;
for(int i=0;i<=23;i++){if(x>=s[i]&&x<s[i+1]){m=i;}}
for(int i=m;i<=23;i++){if(y>=s[i]&&y<s[i+1]){n=i;}}
cout<<n-m<<endl;}
return 0;
}
