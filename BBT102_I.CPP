#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int x,y;
    printf("enter two nos \n");
    scanf("%d%d",&x,&y);
    if(x>y) {
	printf("x=%d is largest\n",x);
	printf("y=%d is smallest \n",y);}
    else {
	printf("y=%d is largest\n",y);
	printf("x=%d is smallest \n",x); }
    getch();
}

