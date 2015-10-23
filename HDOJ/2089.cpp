#include <iostream>
using namespace std;
int main()
{unsigned int a[8],x,y,s,t;
while(cin>>x>>y&&(x!=0||y!=0))
{for(int i=1;i<=7;i++){a[i]=0;}s=0;
for(int i=x;i<=y;i++)
{a[1]=i/100000;a[2]=i%100000/10000;a[3]=i%10000/1000;
a[4]=i%1000/100;a[5]=i%100/10;a[6]=i%10;t=1;
for(int j=1;j<=6;j++){if((a[j]==4||10*a[j]+a[j+1]==62)&&t){s++;t=0;}}}
cout<<y-x+1-s<<endl;
}
return 0;
}
