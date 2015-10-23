#include <iostream>
#include <cmath>
using namespace std;
int main()
{__int64 a[101][101],max,m1,m2,n,m;
while(cin>>n>>m)
{max=0;m1=1;m2=1;
for(int i=1;i<=n;++i)
{for(int j=1;j<=m;++j)
{cin>>a[i][j];if(abs(a[i][j])>abs(max)){max=a[i][j];m1=i;m2=j;}}
}
cout<<m1<<' '<<m2<<' '<<max<<endl;} 
return 0;
}
