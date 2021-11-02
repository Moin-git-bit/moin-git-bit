#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,j = 0,x = 0;

    printf("\n Enter a row & column size  = ");
    scanf("%d",&x);

    printf("\n Hey guys we are printing H ==>\n");

    for(i = 1;i <= x;i++)
    {
        for(j = 1;j <= x;j++)
        {
            if(j == 1 || j == x || i == (x/3) + 1)
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
    printf("\n thanks for using this program ");
    getch();
    return 0;
}
