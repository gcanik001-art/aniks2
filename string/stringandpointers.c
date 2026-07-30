#include<stdio.h>
#include<string.h>
int main(){

char arr[]={'a','b'};//size 2
char str[]={"hello anik"};//size 6


char *ptr="anik is my name ";
//ptr[0]='p'; possible na 
ptr="not shakib  is my name ";
printf("%s",ptr);
//tahhole not shakib is my name print hobe 




////// golden rule %s a 1st ar element ta dileo o pora address tai niya nei mane full sentence tai print kore 



/*output with pointer
char *ptr=str;
while(*ptr!='\0'){

printf("%c",*ptr);
ptr++;

//%s asole onek ta *pointer ar moto kaj kore i mean ore address dile o oitar bioter takeeee nei address nei na wowwww 


}
*/







//char *ptr=&arr2[0];
/*printf("%p\n",&str);
printf("%p",str);  //ai 2 ta same output dei str  equal &str[0]  for an address hisebe 
*/
return 0;

}

