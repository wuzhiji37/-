#include<iostream>
using namespace std;
int main()
{
	int n,n0,m,i,j;
	cin>>n;n0=n;
	while(n--)
	{
		cin>>m;
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=m;j++)
				if(i==j||i+j-1==m)cout<<'X';
				else if(i+j-1<m||i>j)cout<<'a';
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
