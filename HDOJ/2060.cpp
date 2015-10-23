#include <iostream>
using namespace std;
int main()
{int n,m,x,y,s;
for(int i=1;i<=n;i++)
{cin>>m>>x>>y;
if(m<7)x+=(15-m)*m/2;
else x+=8*m-21;
cout<<(x>=y?"Yes":"No")<<endl;}
return 0;
}
