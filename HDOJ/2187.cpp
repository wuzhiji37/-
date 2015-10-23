#include <iostream>
#include <iomanip>
using namespace std;
int test,n,m,i,j,a[1001],b[1001];
double c[1001],d[1001],s;
void sort();
int main()
{
	cin>>test;
	for(i=1;i<=test;i++)
	{
		cin>>n>>m;
		for(j=1;j<=m;j++)
		{
			cin>>a[j]>>b[j];
			c[j]=(double)a[j]/b[j];
		}
		sort();
		j=1;s=0;
		while(n>a[j]*b[j])
		{
			s+=b[j];
			n-=a[j]*b[j];
			j++;
		}
		s+=(double)n/b[j];
		cout<<fixed<<setprecision(2)<<s<<endl;
		/*for(i=i;i<=m;i++)
		{
			cout<<a[i]<<' '<<b[i]<<' '<<c[i]<<endl;
		}	
		system("pause");*/
	}
	return 0;
}
void sort()
{
	int i0,j0;double mid;
	for(i0=1;i0<m;i0++)
	{
		for(j0=i0;j0<=m;j0++)
		{
			if(c[j0]<c[i0])
			{
				mid=a[j0];a[j0]=a[i0];a[i0]=mid;
				mid=b[j0];b[j0]=b[i0];b[i0]=mid;
				mid=c[j0];c[j0]=c[i0];c[i0]=mid;
			}
		}
	}
}
