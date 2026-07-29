#include<stdio.h>
int main(){

int a,b;
scanf("%d %d",&a,&b);
int*x=&a;
int *y=&b;
if(*x>*y)
printf("lar %d",*x);
else 
printf("lar %d",*y);












    return 0;
}