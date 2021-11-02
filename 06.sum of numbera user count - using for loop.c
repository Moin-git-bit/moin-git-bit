// program to find maximum from inputted number
#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0,cnt = 0,num = 0,max = 0;

    printf("\n enter how many numbers you have = ");
    scanf("%d",&num);

    for(cnt = 1;cnt <= num;cnt++)
    {
        printf("\n enter number %d. = ",cnt);
        scanf("%d",&no);

        if( no > max)
        {
            max = no;
        }
    }
    printf("\n maximum from given numbers is = %d.",max);
    getch();
    return 0;
}
