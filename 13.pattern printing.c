#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,j = 0,x = 0;

    printf("\n enter row & column size => ");
    scanf("%d",&x);

    printf("\n \n we are doing pattern printing =>\n\n ");

    for(i = 1;i <= x;i++)
    {
        for(j = 1;j <= x;j++)
        {
            if(i <= j)
            {
               printf(" $ ");
            }
            else
            {
                printf("   ");
            }

        }
        printf("\n");
    }
    printf("thanks for using my program");
    getch();
    return 0;
}

