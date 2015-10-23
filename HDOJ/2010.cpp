#include <iostream>

using namespace std;

int main()
{int a,b,n1,n2,n3,tf;
while(cin>>a>>b)
{tf=0;for(int i=a;i<=b;++i)
{n1=i/100;n2=(i%100)/10;n3=i%10;
if(n1*n1*n1+n2*n2*n2+n3*n3*n3==i)
{++tf;if(tf==1)cout<<i;else cout<<" "<<i;}}
if(tf==0)cout<<"no"<<endl;else cout<<endl;

}
    
return 0;
}
