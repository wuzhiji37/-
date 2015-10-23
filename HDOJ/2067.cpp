#include <iostream>
using namespace std;
int main()
{int n,k=0;__int64 a[36][36];int x,y;
for(int i=0;i<=35;i++){a[0][i]=1;}
for(int i=1;i<=35;i++)
{a[i][i]=a[i-1][i];
for(int j=i+1;j<=35;j++){a[i][j]=a[i-1][j]+a[i][j-1];}
}
while(cin>>n&&n!=-1){k++;cout<<k<<' '<<n<<' '<<a[n][n]*2<<endl;}
return 0;
}
