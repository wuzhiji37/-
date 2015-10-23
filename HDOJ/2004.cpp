#include <iostream>
using namespace std;

int main()
{long a;
while(cin>>a)
{if((a<0)||(a>100)){cout<<"Score is error!"<<endl;}
else if(a<60){cout<<"E"<<endl;}
else if(a<70){cout<<"D"<<endl;}
else if(a<80){cout<<"C"<<endl;}
else if(a<90){cout<<"B"<<endl;}
else{cout<<"A"<<endl;}          
             }
return 0;
}
