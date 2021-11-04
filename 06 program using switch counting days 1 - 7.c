/// program using switch case to count days 1 - 7 ///

#include<stdio.h>
#include<conio.h>

int main()
{
    int days = 0;

    printf("\n enter a day (1 - 7) = ");
    scanf("%d",&days);

    switch(days)
    {
         case 1:
                printf(" \n MONDAY \n");
                break;

         case 2:
                printf(" \n TUESDAY \n");
                break;

         case 3:
                printf("\n WEDNESDAY \n");
                break;

         case 4:
                printf("\n THURSDAY \n");
                break;

         case 5:
                printf("\n FRIDAY \n");
                break;

         case 6:
                printf("\n SATURDAY \n");
                break;

         case 7:
                printf("\n SUNDAY \n");
                break;

         default:
                 printf("\n invalid day !!! \n");
                 break;
    }

    printf("\n thanks for using my program....press any key to exit. ");

    getch();
    return 0;
}
