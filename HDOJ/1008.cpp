#include <iostream>
using namespace std;
int main()
{int n,x,y,s;
while(cin>>n&&n!=0)
{x=0;cin>>y;s=y*6+5;for(int i=2;i<=n;i++)
{x=y;cin>>y;if(x<y)s=s+(y-x)*6+5;else s=s+(x-y)*4+5;}
cout<<s<<endl;}
return 0;
}
