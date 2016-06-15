#include<stdio.h>

int isleap(int y)
{
    if(y%4==0&&(y%100!=0||y%400==0))return 1;
    return 0;
}

int main()
{
    int i,T;
    int Y,M,D;
    int Date;
    scanf("%d",&T);
    while(T--)
    {
        Date=18*365;
        scanf("%d-%d-%d",&Y,&M,&D);
        if(!isleap(Y+18)&&M==2&&D==29)
        { printf("-1\n");
            continue;
        }
        if(isleap(Y)&&(M<2||(M==2&&D<=28)))
            Date++;
        if(isleap(Y+18)&&(M>2||(M==2&&D==29)))
            Date++;

        for(i=Y+1;i<=Y+17;i++)
        {
            if(isleap(i))Date++;
        }

        printf("%d\n",Date);
    }
    return 0;
}