/////////////////////////////////////////////////
////// program using switch
/////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
  char letter = 0;

  printf("\n enter an alphabet = ");
  scanf("%c",&letter);

  switch(letter)
  {
    case 'a':
    case 'A':
             printf("\n welcome \n ");
             break;
    case 'b':
    case 'B':
    case 'z':
    case 'Z':
             printf("\n good bye \n");
             break;
    case 'c':
    case 'C':
    case 'm':
    case 'M':
    case 'x':
    case 'X':
             printf("\n have a nice day \n ");
             break;
    case 'd':
    case 'D':
            printf("\n good day \n");
            printf("\n thanks \n");
            break;
    case 'h':
    case 'H':
            printf("\n bad day \n ");
            break;
  }

  printf("\n\n thanks for using my program");

  getch();
  return 0;
}
