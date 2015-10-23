#include <iostream>

using namespace std;
int main()
{char a[10001];int n,len,num;
cin>>n;gets(a);
for(int i=1;i<=n;++i)
{gets(a);len=strlen(a);num=0;
for(int j=0;j<len;++j)
{if((a[j]>='0') && (a[j]<='9'))++num;}
cout<<num<<endl;
}
return 0;
}
