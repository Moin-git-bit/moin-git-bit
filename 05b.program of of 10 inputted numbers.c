//program to get ten inputted number
#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0,sum = 0,cnt = 0;

    printf("\n enter 10 integers number to calculate there sum => \n");

    while(cnt < 10)
    {
        printf("\n enter  number %d. = ",cnt+1);
        scanf("%d",&no);

        sum = sum + no;
        cnt++;
    }
    printf("\n sum of given 10 numbers is = %d.",sum);

    getch();
    return 0;
}

