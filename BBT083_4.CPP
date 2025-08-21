#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a,b,div;
  printf("enter value of a:");
  scanf("%d",&a);
  printf("enter the value of b:");
  scanf("%d",&b);
  div=a/b;
  printf("division of %d/%d is %d\n",a,b,div);
  printf("%d\t%d\t%d",a,b,div);
  getch();
}