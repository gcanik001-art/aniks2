#include<stdio.h>
#include<string.h>
int main(){

char arr[]={'a','b'};//size 2
char arr2[]={"hello anik"};//size 6
char str[40];


//initilaizatioon ar time a maan dile sodo  matroo array size faka rhka jai bt amnite faka size declare kora jai na 



//input
//scanf("%s",str);//& cinho kintu lage na 
//scanf use krle sodo 1st world nei mane space nite pare na i mean space re null pore kore 
//npw lets solve it 


 //solve scanf("%[^\n]s",str);//akon thik ase 
//best apporch holo 
gets(str);//entire sentece can be input //puts automaticely \n dieee dei also 
//size 
/*int size=0;
int k=0;
while(str[k]!='\0'){
  size++;
  k++;
}
//printf("%d \n",size);

for(int i=0,j=size-1;i<=j;i++,j--){

    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
*/
puts(str);


//reverse string and print 

























//printf("%s",str);

//input and output of a string without loop

// output printf("%s",arr2);
//puts(arr2);atao output dibe 








/*int i=0;
//output
while(arr2[i]!='\0'){

printf("%c",arr2[i]);  //array ar khetre new tech arr2[i ] je kotha i[arr2] same kotha wow  or *(arr+i) or *(i+arr) same 
i++;



}
*/














//aikane size dile kintu u dite hobe 
//so char arr2[2]=l ke bjai pora array ar mooto normal 
//space o akekta element or character 
 //alaways try krbo je size dibo na null diya kaj krrbo alaways 
//g rule = string niye kaj krar time a jdi '' diye maan deei tahole last a null character dibo '\0'
//bt jkon amra direct word leke felbo tokon automatic deoa hoia jai null chrarter 
//so ai time a null character add hoia jai tai array ar size o bere jai 












return 0;

}