#include <iostream>
using namespace std;
int main()
{unsigned __int64 a[65],b[65],min;
a[0]=0;for(int i=1;i<=64;i++){a[i]=a[i-1]*2+1;}
b[0]=0;b[1]=1;b[2]=3;
for(int i=3;i<=64;i++)
{min=a[1]+b[i-2];
for(int j=2;j<i-1;j++){if(a[j]+b[i-j-1]<min)min=a[j]+b[i-j-1];}
b[i]=min*2+1;
}

while(cin>>a[0]){cout<<b[a[0]]<<endl;}
return 0;
}
