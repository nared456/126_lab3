#include<stdio.h>
int main()
{
    long long num,i;
    int p;
    scanf("%lld",&num);
    for(num;num>=0;num--)
    {
        p = 1;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                p=0;
                break;
            }
        }
        if(p==1)
        {
            printf("%lld",num);
            break;
        }

    }
    return 0;
}
