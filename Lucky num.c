#include<stdio.h>
int main()
{
    int num,p=0,x=2,n=0,tmp;
    scanf("%d",&num);
    tmp=num;
    while(tmp<1)
    {
        while(tmp%x==0)
        {
            tmp /= x;
            n++;
        }
        x++;
    }
    if(n==3)
        printf("%d is a Lucky Number.",num);
    else
        printf("%d is not a Lucky Number.",num);
    return 0;
}
