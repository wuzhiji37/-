#include <iostream>
using namespace std;

int main()
{char ch[3],c;

while(cin>>ch[0]>>ch[1]>>ch[2])
{if(ch[2]<ch[1]){c=ch[2];ch[2]=ch[1];ch[1]=c;} 
if(ch[1]<ch[0]){c=ch[0];ch[0]=ch[1];ch[1]=c;} 
if(ch[2]<ch[1]){c=ch[2];ch[2]=ch[1];ch[1]=c;} 
cout<<ch[0]<<" "<<ch[1]<<" "<<ch[2]<<endl;}
return 0;
}
