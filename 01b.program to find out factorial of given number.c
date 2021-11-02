// factorial of given number
#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0,fact = 0 ,temp = 0;

    printf("\n enter a digit for its factorial = ");
    scanf("%d",&no);

    for( temp = no , fact = 1 ; temp > 0 ; fact *= temp,temp--);

    printf("\n factorial of given number %d = %d.",no,fact);

    getch();
    return 0;
}

