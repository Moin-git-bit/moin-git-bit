#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,j = 0,x = 0;

    printf("\n enter a value for row & column ==> ");
    scanf("%d",&x);

    printf("\n You have value for pattern printing ==>\n\n");

    for(i = 1;i <= x;i++)
    {
        for(j = 1;j <= x;j++)
        {
            if(i == 1 ||i == x || j == 1 || ( i ==(x/3) + 1 &&(i >= j)))
            {
                printf(" * ");
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
    printf("\n thanks ");
    getch();
    return 0;
}
