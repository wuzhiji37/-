#include <iostream>
#include <cstring>
using namespace std;
int main()
{int n,j,len;
char a[10001];cin>>n;gets(a);
for(int i=1;i<=n;i++)
{gets(a);j=0;len=strlen(a);
for(int i=1;i<=len;i++)
{if(a[i]<0){j++;i++;}}
cout<<j<<endl;}
return 0;
}
