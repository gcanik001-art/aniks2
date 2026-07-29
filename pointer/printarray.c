#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int *p=arr;
    for(int i=0;i<5;i++){
    printf("%d ",*p);
    p=p+1;
    //or printf("%d",*(p+i));
    
    
    //*p++ mane  post increment like *p kaj krbe then p ar adrees 4 byte incresse pabe 
    
    
    }


//mainly garbage value hole program crash krte pare 

/*#include <stdio.h>

int main()
{
    int a[] = {5, 10, 15, 20};
    int *p = a;

    printf("%d\n", *(p + 2));
    printf("%d\n", *(++p));
    printf("%d\n", *p);

    return 0;*/

//predict the output :



//function ar pointer alaways copy hoi  so oine pointer chge hole seta copy ta bt maan change krle maan modify hoia jai 





    return 0;
}

