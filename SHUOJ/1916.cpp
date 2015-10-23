// 	吴智极
//	37silnov
//	qq635660278
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    char s[50];
    cin >> n ;
    cin.getline(s,10);
    while (n--) {
        bool FLAG = false;
        cin.getline(s,50);
        for(int i = 0; i< strlen(s) && !FLAG;i++) {
            char t[50];
            strcpy(t,s);
            for (int j=i;j<strlen(s);j++) {
                t[j]=s[j+1];
            }
            bool flag = true;
            for (int j=0;j<strlen(t)/2;j++) {
                if(t[j]!=t[strlen(t)-1-j]) {
                    flag = false;
                }
            }
            if (flag) {
                FLAG = true;
            }
        }
        if (FLAG)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
	return 0;
}

