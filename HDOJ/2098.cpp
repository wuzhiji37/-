#include <iostream>
using namespace std;
int main()
{int a[10001],n;
for(int i=0;i<=10000;i++){a[i]=1;}a[1]=0;
for(int i=2;i<=100;i++)
{if(a[i]){for(int j=2;j<=10000/i;j++)a[i*j]=0;}}
while(cin>>a[0]&&a[0]!=0)
{n=0;for(int i=1;i<a[0]/2;i++)
{if(a[i]&&a[a[0]-i])n++;}cout<<n<<endl;};
return 0;
}
