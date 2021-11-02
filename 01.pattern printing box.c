#include<stdio.h>
#include<conio.h>

int main()
{
     int i = 0, j = 0 ,R = 0, C = 0;
    printf("\n Enter Row size =\t");
     scanf("%d", &R);

    printf("\n Enter comn size =\t");
     scanf("%d", &C);

     printf("\n We are doing pattern printing \n");

    for(i = 1; i <= R;i++)
    {
        for (j =1 ; j <=C ; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
        getch();
        return 0;

}
