//
//  main.cpp
//  1909
//
//  Created by 吴智极 on 15/10/23.
//  Copyright © 2015年 吴智极. All rights reserved.
//

#include <iostream>
using namespace std;
int d[5][2] = {{2,2},{2,-2},{-2,2},{-2,-2},{0,0}};
int main(int argc, const char * argv[]) {
    int i,j,p,q,x,y,a[10][10];
    while (cin>>p>>q>>x>>y) {
        for (i = 0; i <= x; i++) {
            for (j = 0; j <= y; j++) {
                a[i][j] = 0;
            }
        }

        for (i=0; i<5; i++) {
            int m = p+d[i][0];
            int n = q+d[i][1];
            if (m>=0 && m<=x && n>=0 && n<=y) {
                a[m][n]= -1;
            }
        }
        for (i = 0; i <= x; i++) {
            if (a[i][0] == -1) {
                for (j = i; j <= x; j++) {
                    a[j][0] = -1;
                }
                break;
            } else {
                a[i][0]=1;
            }
        }
        for (i = 0; i <= y; i++) {
            if (a[0][i] == -1) {
                for (j = i; j <= y; j++) {
                    a[0][j] = -1;
                }
                break;
            } else {
                a[0][i]=1;
            }
        }
        for (i = 1; i <= x; i++) {
            for (j = 1; j <= y; j++) {
                if (a[i][j] == -1) {
                    continue;
                }
                if (a[i][j-1] == -1) {
                    if (a[i-1][j] == -1) {
                        a[i][j] = -1;
                    } else {
                        a[i][j] = a[i-1][j];
                    }
                } else {
                    if (a[i-1][j] == -1) {
                        a[i][j] = a[i][j-1];
                    } else {
                        a[i][j] = a[i-1][j]+a[i][j-1];
                    }
                }
            }
        }
        cout<<(a[x][y]<0?0:a[x][y])<<endl;
    }
    return 0;
}
