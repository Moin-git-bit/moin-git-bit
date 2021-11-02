/// program to find out square of given numbers ///

#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0,sqr = 0;

    printf("\n enter a square = ");
    scanf("%d",&no);

    sqr = no * no;

    printf("\n this is the square of %d = %d",no,sqr);

    getch();
    return 0;
}

