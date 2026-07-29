#include<stdio.h>
int main(){


int a;
a=6;
printf("%p \n",&a);
int *x=&a;
*x=7;
printf("%d\n ",a);
printf("%p",&x);
return 0;
















}