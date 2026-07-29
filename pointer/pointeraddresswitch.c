#include<stdio.h>
int main(){


int a;
a=10;
int *x=&a;//int * int ka address store karta hai 
int **y=&x;
//int **  int * ka adress store krta hai 
int ***z=&y;

//only akta * use krle *y a sodo x ar address print krto 
//x ar address oonno pointeer a switch
printf("%d\n",*x);
printf("%d\n",**y);//akta pointer ar bitor arekta pointer rhakle double * use kra lage 
printf("%d",***z);
return 0;















}