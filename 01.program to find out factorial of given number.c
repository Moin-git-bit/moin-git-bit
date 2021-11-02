// factorial of given number
#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0,fact = 1,temp = 0;

    printf("\n enter a digit for its factorial = ");
    scanf("%d",&no);

    temp = no;

    while(temp > 1)
    {
        fact = fact * temp;
        temp--;
    }
    printf("\n factorial of given number %d = %d.",no,fact);

    getch();
    return 0;
}
