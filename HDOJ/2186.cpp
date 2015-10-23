#include <iostream>
using namespace std;
int main()
{
	int m,n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>m;
		cout<<(m/2-1)/10+((m-m/2)*2/3-1)/10+(m-m/2-(m-m/2)*2/3-1)/10+3<<endl;
	}
	return 0;
}
