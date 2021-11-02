// program to find minimum from inputted numbers
#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0,min = 0,cnt = 0,num = 0;

    printf("\n enter how many number you have = ");
    scanf("%d",&num);

    for(cnt = 1;cnt <= num ;cnt++)
    {
        printf("\n enter a number = ");
        scanf("%d",&no);

        if(cnt == 1 || min > no )
        {
            min = no;
        }
    }

    printf("\n minimum from given number is = %d.",min);

    getch();
    return 0;
}
