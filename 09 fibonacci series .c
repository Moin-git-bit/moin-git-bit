/// Fibonacci series
#include<stdio.h>
#include<conio.h>

int main()
{
    int n1 = 0,n2 = 1,n3 = 0,cnt = 0;

    printf("\n enter count for Fibonacci series = ");
    scanf("%d",&cnt);

    printf("\n Fibonacci series is => \t\n\n");

    printf("%d\t%d",n1,n2);

    while(cnt > 2)
    {
        n3 = n1 + n2;

        printf("\t%d",n3);

        n1 = n2;
        n2 = n3;

        cnt--;
    }

    getch();
    return 0;
}
