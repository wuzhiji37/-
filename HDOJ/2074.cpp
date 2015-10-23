#include <iostream>
using namespace std;
int main()
{ int n,s=0;;char x,y,a[80][80];
while(cin>>n>>x>>y)
{s++;if(s>1)cout<<endl;
for(int i=1;i<=(n+1)/2;i++)
{for(int j=i;j<=n-i+1;j++)
{for(int k=i;k<=n-i+1;k++){a[j][k]=((((n-1)%4)/2+i)%2==1?x:y);}}}
a[1][1]=' ';a[1][n]=' ';a[n][1]=' ';a[n][n]=(n==1?x:' ');
for(int i=1;i<=n;i++)
{for(int j=1;j<=n;j++)
{cout<<a[i][j];}cout<<endl;}

}
return 0;
}
