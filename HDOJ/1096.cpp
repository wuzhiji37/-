#include<iostream>
using namespace std;
int main()
{
	int a,i,j,m,n,s;	
	while(cin>>n)
		for(i=0;i<n;i++)
		{
			if(i!=0)cout<<endl;
			cin>>m;
			s=0;
			for(j=0;j<m;j++)
			{
				cin>>a;
				s+=a;
			}
			cout<<s<<endl;
		}
	return 0;
}
 
