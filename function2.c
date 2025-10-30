#include <stdio.h>
void odd(int n);
 int main(){
 int n;
 printf("enter the value of n:");
 scanf("%d",&n);
 odd(n);
 return 0;

 }

 void odd(int n){

     for (int i=1;i<=n;i++){
            printf("%d",2*i-1);
            printf("\n");}

    }
