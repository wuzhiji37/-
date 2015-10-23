#include <iostream>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		cout<<a*(a+1)*b*(b+1)/4<<endl;
	}
	return 0;
}
