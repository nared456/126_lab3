#include<stdio.h>
int main()
{
    int num,p=0,x=2,c=0,tmp;
    scanf("%d",&num);
    tmp=num;
    while(tmp!=1)
    {
        if(tmp%x==0)
        {
            tmp /= x;
            if(p==x)
                break;
            p = x;
            c++;
        }
        else
        x++;
    }
    if(c==3)
        printf("%d is a Lucky Number.",num);
    else
        printf("%d is not a Lucky Number.",num);
    return 0;
}
