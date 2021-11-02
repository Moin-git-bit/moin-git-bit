#include<stdio.h>
#include<conio.h>

int main()
{
   int x = 0,i = 0,j = 0;
   char ch = 'A';
   printf("\n Enter a value for L.L.T pattern = ");
   scanf("%d",&x);
   for(i = 0;i <= x;i++ )
   {
       for(ch = 'A',j = 1;j <= x;j++,ch++)
       {
           if((i >= j)&&(i + j <= x + 1))
           {
             printf(" %c ", ch);
           }
           else
           {
             printf(" ");
           }
       }
       printf("\n");
   }
   getch();
   return 0;
}
