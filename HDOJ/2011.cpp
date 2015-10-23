#include <iostream>
#include <iomanip>
using namespace std;

int main()
{int a,b;float s,k;
cin>>a;
for(int i=1;i<=a;++i)
{cin>>b;s=0;k=1;
for(int j=1;j<=b;++j)
{s=s+k/j;k=-k;}
cout<<fixed<<setprecision(2)<<s<<endl;}

return 0;
}
