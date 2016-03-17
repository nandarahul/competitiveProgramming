#include<stdio.h>

int main()
{
    int T,N,count,speedP,speedC;
    scanf("%d\n",&T);
    for(int i=0;i<T;i++)
    {
        count=1;
        scanf("%d",&N);
        scanf("%d",&speedC);
        speedP=speedC;
        for(int j=1;j<N;j++)
        {
            scanf("%d",&speedC);
            if(speedC<=speedP)
                count++;
            else
            {
                speedC=speedP;
            }
            speedP=speedC;
        }
        printf("%d\n",count);
    }
    return 0;
}
