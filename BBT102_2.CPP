#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int x,y,z,largest,smallest;
    printf("enter three nos \n");
    scanf("%d%d%d",&x,&y,&z);
    largest=x;
    if(y>largest)
	largest=y;
    if(z>largest)
	largest=z ;
    smallest=x;
    if(y<smallest)
	smallest=y;
    if(z<smallest)
	smallest=z ;

	printf("largest=%d\n",largest);
	printf("smallest=%d \n",smallest);
    getch();
}















































































