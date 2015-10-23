#include <iostream>
#include <cstring>
using namespace std;
int main()
{char str[50];int n,lower,upper,digit,other,len;
cin>>n;gets(str);
for(int i=1;i<=n;i++)
{gets(str);len=strlen(str);lower=upper=digit=other=0;
for(int j=0;j<=len-1;j++)
{if(str[j]>='a'&&str[j]<='z')lower++;
else if(str[j]>='A'&&str[j]<='Z')upper++;
else if(str[j]>='0'&&str[j]<='9')digit++;
else other++;}
if(((lower>0&&upper>0&&digit>0)||(other>0&&upper>0&&digit>0)
||(lower>0&&other>0&&digit>0)||(lower>0&&upper>0&&other>0))&&(len<=16)&&(len>=8))
cout<<"YES"<<endl;else cout<<"NO"<<endl;}
return 0;
}
