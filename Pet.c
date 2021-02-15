#include<stdio.h>
int main()
{
    int score_player[5][4];
    int i,j;
    int score[5],player=0,best_score=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&score_player[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        score[i]=0;
        for(j=0; j<4; j++)
        {
            score[i] += score_player[i][j];
            if(best_score < score[i])
            {
                best_score = score[i];
                player = i;
            }
        }
    }
    printf("%d %d",player+1,best_score);
    return 0;
}
