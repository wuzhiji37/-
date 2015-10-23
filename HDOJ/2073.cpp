#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{double a[201][201],s;int n,x1,y1,x2,y2;a[0][0]=0;
for(int i=1;i<=200;i++)
{a[0][i]=a[i-1][0]+sqrt((i-1)*(i-1)+i*i);
for(int j=1;j<=i;j++){a[j][i-j]=a[j-1][i-j+1]+sqrt(2);}}
cin>>n;
for(int i=1;i<=n;i++)
{cin>>x1>>y1>>x2>>y2;s=a[x1][y1]-a[x2][y2];if(s<0)s=-s;cout<<fixed<<setprecision(3)<<s<<endl;}


return 0;
}
