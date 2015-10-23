#include<iostream>
using namespace std;
int main()
{
	int n,is,i;
	while(cin>>n)
	{
		n%=65;is=1;
		for(i=0;i<=64&&is;i++)
			if((i*n+18)%65==0)
			{
				is=0;
				cout<<i<<endl;
			}
		if(is)cout<<"no"<<endl;
	}
	return 0;
}
