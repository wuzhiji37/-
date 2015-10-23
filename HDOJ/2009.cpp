#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{int b;float a,s;
while(cin>>a)
{cin>>b;s=0;
for(int i=1;i<=b;++i)
{s=s+a;a=sqrt(a);}
cout<<fixed<<setprecision(2)<<s<<endl;}

return 0;
}
