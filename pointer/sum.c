#include<stdio.h>
int main(){

int a,b;
scanf("%d %d",&a,&b);
int*x=&a;
int *y=&b;
int sum=*x+*y;
printf("%d",sum);










    return 0;
}