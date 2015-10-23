#include<iostream>
using namespace std;
int main()
{
	int n,s,i;
	while(cin>>n)
	{
		s=(((1+n)%10000)*(n%10000)/2)%10000;
		s=(s*s)%10000;
		if(s>999)cout<<s<<endl;
		else if(s>99)cout<<"0"<<s<<endl;
		else if(s>9)cout<<"00"<<s<<endl;
		else cout<<"000"<<s<<endl;
	}
	return 0;
}
