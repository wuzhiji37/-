#include <iostream>
#include <cstring>
using namespace std;
int main()
{char str[100001];int s;
while(gets(str)&&(str[0]!='0'))
{s=0;for(int i=0;i<strlen(str);i++){s=s+str[i]-'0';}
while(s>9){s=s/100000+s%100000/10000+s%10000/1000+s%1000/100+s%100/10+s%10;}
cout<<s<<endl;}
return 0;
}
