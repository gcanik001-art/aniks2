#include<stdio.h>

void swap(int *x,int *y){ //jeheto fun a adress pataisi tai arki adddress collect krte pointer lagbe

int temp;
temp=*x;
*x=*y;//a=9;
*y=temp;//b=2;

return ;




}






int main(){


int a=2;
int b=9;
swap(&a,&b);
printf("%d",a);
printf("%d",b);







return 0;
















}