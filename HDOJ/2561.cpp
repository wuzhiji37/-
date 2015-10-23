#include<iostream>
using namespace std;
int main()
{
	int n,m,i,m1,m2,m3,x;
	cin>>n;
	while(n--)
	{
		cin>>m>>m1>>m2;m-=2;
		if(m1>m2){m3=m1;m1=m2;m2=m3;}
		while(m--)
		{
			cin>>x;
			if(x<m1){m2=m1;m1=x;}
			else if(x<m2){m2=x;}
		}
		cout<<m2<<endl;	
	}
	return 0;
}
