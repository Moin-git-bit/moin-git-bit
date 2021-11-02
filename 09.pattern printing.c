#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0,C = 0,i = 0,j = 0;

    printf("\n\t enter a size for Row => ");
    scanf("%d",&R);

    printf("\n\t enter a size for column => ");
    scanf("%d",&C);

    printf("\n\t we are printing Z =>\n\n ");

    for(i = 1;i <= R;i++)
    {
        for(j = 0;j <= C;j++)
        {
            if(i == 1 || i == R || i + j == C + 1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n thanks for my program.");
    getch();
    return 0;
}

