#include <iostream>
using namespace std;
int main()
{int n;__int64 s[31];
s[0]=1;cin>>n;
for(int i=1;i<=30;i++){s[i]=s[i-1]*2;}
for(int i=1;i<=n;i++){cin>>s[0];cout<<s[s[0]]-1<<endl;}
return 0;
}
