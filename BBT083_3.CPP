#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a,b,mul;
  printf("enter value of a:");
  scanf("%d",&a);
  printf("enter the value of b:");
  scanf("%d",&b);
  mul=a*b;
  printf("multiplication of %d*%d is %d\n",a,b,mul);
  printf("%d\t%d\t%d",a,b,mul);
  getch();
}