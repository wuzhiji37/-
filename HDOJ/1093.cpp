#include<iostream>
using namespace std;
int main()
{
	int a,s,m,n,i,j;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>m;
			s=0;
			while(m--)
			{
				cin>>a;
				s+=a;
			}
			cout<<s<<endl;
		}
	}
	return 0;
}
