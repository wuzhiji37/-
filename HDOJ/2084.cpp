#include <iostream>
using namespace std;
int max(int x,int y)
{if(x>y)return x;else return y;}
int main()
{int m,n,a[101][101],b[101][101],s;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>m;
 for(int j=1;j<=m;j++){for(int k=1;k<=j;k++){cin>>a[j][k];}}
 b[1][1]=a[1][1];
 for(int j=2;j<=m;j++)
 {b[j][1]=a[j][1]+b[j-1][1];
  for(int k=2;k<=j-1;k++)
  {b[j][k]=max(b[j-1][k-1],b[j-1][k])+a[j][k];}
  b[j][j]=a[j][j]+b[j-1][j-1];
 }
 s=b[m][1];for(int j=2;j<=m;j++){if(b[m][j]>s)s=b[m][j];}
 cout<<s<<endl;
}
return 0;
}
