#include<stdio.h>
#include<math.h>
int main()
{
    long long tmp=0,n,reverse=0,r,od,i=2;
    int p;
    scanf("%lld",&n);
    od=n;
    while(n!=0)
    {
        r=n%10;
        reverse=reverse*10 + r;
        n/=10;
    }
    for(reverse;reverse>=0;reverse--)
    {
        p = 1;
        while(i<reverse)
        {
            if(reverse%i==0)
            {
                p=0;
                break;
            }
            i++;
        }
        if(p==1)
        {
            printf("%lld",reverse);
            break;
        }

    }
}
