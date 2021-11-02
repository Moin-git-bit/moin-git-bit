// power N1 ^ N2
#include<stdio.h>
#include<conio.h>

int main()
{
    int no1 = 0,no2 = 0,temp = 0,pow = 1;

    printf("\n enter a number1 = ");
    scanf("%d",&no1);

    printf("\n enter a number2 = ");
    scanf("%d",&no2);

    temp = no2;

    while(temp > 0)
    {
       pow = pow * no1;
       temp--;
    }

    printf("\n power of %d raise to %d = %d.",no1,no2,pow);

    getch();
    return 0;
}
