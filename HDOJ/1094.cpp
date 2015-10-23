#include<iostream>
using namespace std;
int main()
{
	int a,s,n;
	while(cin>>n)
	{
		s=0;
		while(n--)
		{
			cin>>a;
			s+=a;
		}
		cout<<s<<endl;
	}
	return 0;
}
