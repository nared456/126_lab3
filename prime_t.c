#include<stdio.h>
int main()
{
    int time[48]={0},i,n,prime_time,p,m=0,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p,&a);
        time[p-1] += a;
    }
    for(i=0;i<48;i++)
    {
        if(m<time[i])
        {
            m = time[i];
            prime_time = i;
        }
    }
    printf("%d %d",prime_time+1,time[prime_time]);
    return 0;
}
