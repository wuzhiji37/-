#include<iostream>
#define S01 a[0]^=a[1]^=a[0]^=a[1]
#define S12 a[1]^=a[2]^=a[1]^=a[2]
#define S23 a[2]^=a[3]^=a[2]^=a[3]
using namespace std;
int a[3];
void sort()
{
	if(a[0]>a[1])S01;if(a[1]>a[2])S12;if(a[2]>a[3])S23;
	if(a[0]>a[1])S01;if(a[1]>a[2])S12;if(a[0]>a[1])S01;
}
int main()
{
	int i=0,j,k,l,m,x;
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]&&(a[0]!=0||a[1]!=0||a[2]!=0||a[3]!=0))
	{
		sort();
		if(i)cout<<endl;
		for(j=0;j<4;j++)
		{
			x=0;
			if(a[j])
			{
				for(k=0;k<4;k++)
				{
					if(a[k]-a[j]||k<j)
					{
						for(l=0;l<4;l++)
						{
							if((a[l]-a[j]||l<j)&&(a[l]-a[k]||l<k))
							{
								m=6-j-k-l;
								if((a[m]-a[j]||m<j)&&(a[m]-a[k]||m<k)&&(a[m]-a[l]||m<l))
								{
									if(x)cout<<' ';
									cout<<a[j]<<a[k]<<a[l]<<a[m];
									x++;
								}
							}
						}
					}
				}
			}
			if(x)cout<<endl;
		}
		i++;
	}
	return 0;
}
