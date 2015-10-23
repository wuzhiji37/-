#include <iostream>
using namespace std;
int main()
{int a[100001],s,t,x;
a[1]=1;for(int i=2;i<=100000;i++)(a[i]=0);
for(int i=2;i<=100000;i++)
{s=0;t=i;do{if(t%2)t=t*3+1;else t=t/2;s++;if(a[t]>0)a[i]=a[t]+s;}while(a[i]=0);}
while(cin>>x){cout<<a[x]<<endl;}

return 0;
}
