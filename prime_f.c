#include<stdio.h>
int main()
{
    long long num,i=2;
    int p;
    scanf("%lld",&num);
    for(num;num>=0;num--)
    {
        p = 1;
        while(i<num)
        {
            if(num%i==0)
            {
                p=0;
                break;
            }
            i++;
        }
        if(p==1)
        {
            printf("%lld",num);
            break;
        }

    }
    return 0;
}
