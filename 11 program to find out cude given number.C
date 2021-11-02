/// program to find out cube of given number ///

#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0,cube = 0;

    printf("\n enter a number for cube = ");
    scanf("%d",&no);

    cube = no * no * no;

    printf("\n\n ************************==============***********************");
    printf("\n\n this is the cube of %d = %d",no,cube);
    printf("\n\n ************************==============***********************");

    getch();
    return 0;
}


