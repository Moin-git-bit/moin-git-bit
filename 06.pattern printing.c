#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,j = 0,x = 0;

    printf("\n Enter Row & column size = ");
    scanf("%d",&x);

    printf("\n We are doing reverse N Pattern printing ==> \n");

    for(i = 1;i <= x; i++)
    {
        for(j = 1;j <= x;j++)
         {
            if(j == 1 || j==x || i + j == x + 1)
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
    printf("\n Thanks for Visiting.");
    getch();
    return 0;
}
