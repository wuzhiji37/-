#include <iostream>

using namespace std;

int main()
{int a,x,y,z;float b;
while(cin>>a && a!=0)
{
x=0;y=0;z=0;
for(int i=1;i<=a;++i)
{cin>>b;
if(b<0)++x;
else if(b==0)++y;
else ++z;}
cout<<x<<" "<<y<<" "<<z<<endl;
} 
return 0;
}
