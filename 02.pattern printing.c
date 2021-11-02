#include<stdio.h>
#include<conio.h>

int main ()
{
    int  i = 0,j = 0,R = 0,C = 0;
    printf("\n enter row size=");
    scanf("%d",&R);
    printf("\n Enter column size=");
    scanf("%d",&C);

    printf("we are doing pattern printing=>\n\n");

    for(i = 1;i <= R;i++)
    {
        for( j = 1;j <= C;j++)
        {
            if(i == 1|| i == R || j==1||j==C)
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

   printf("thanks");
   getch();
   return 0;

}
