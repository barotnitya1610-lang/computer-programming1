#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int net,gs,al,ded;
   printf("enter the gross salary:") ;
   scanf("%d",&gs);
   printf("enter the allowances:") ;
   scanf("%d",&al);
   printf("enter the deduction:") ;
   scanf("%d",&ded);
   net=gs+al-ded;
   printf("%d=%d+%d-%d",net,gs,al,ded);
   getch();

}















































































