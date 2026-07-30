#include<stdio.h>
int main(){


int arr[2][3];
for(int i=0;i<2;i++){

for(int j=0;j<3;j++){
scanf("%d  ",&arr[i][j]);


}
printf("\n");
}
//transpose nirnoi  and store koro alada akta matrix a ;


/*for(int i=0;i<3;i++){ //c=3 r=2

for(int j=0;j<2;j++){

printf("%d   ",arr[j][i]);
*/













//Find the row with the maximum sum in a matrix
/*int max=-10;
int temp=0;
for(int i=0;i<2;i++){

int sum=0;


for(int j=0;j<3;j++){

sum+=arr[i][j];

}

if(sum>max)
max=sum;
temp=i;

}
printf("%d the row ",temp);
*/








//Given matrix, find sum of rectangle formed by 2 coordinates (l1,r1) and (l2,r2)
//ans:aikhane just i ar maan ta jabe l2 porzonto and j ar man start hobe r1 teke ''''



//find the sum of n*m  matrix easy ase just sum name a akta variable a 0 rhaklei hobe 

/* max number nirnoi min a just less than use krlei hobe 



int max=-10;
int min=-5;
int temp1=0;
int temp2=0;

int arr[2][3];
for(int i=0;i<2;i++){

for(int j=0;j<3;j++){
scanf("%d  ",&arr[i][j]);


}
}
for(int i=0;i<2;i++){

for(int j=0;j<3;j++){


    if(arr[i][j]>max){
    max=arr[i][j];
    temp1=i;
    temp2=j;
}


}
printf("max %d   %d %d",max,temp1,temp2);


}

*/




//add two matrix without using another matrix 
/*int m1[2][3];
int m2[2][3];
//input neo 
for(int i=0;i<2;i++){

for(int j=0;j<3;j++){

m1[i][j]+=m2[i][j];

}
}*/
//now ans is store in m1 so aita outprint korlei hobe 






//add two matrix with another 2d array 
/*int m1[2][3];
int m2[2][3];
int result[2][3];
result[0][0]=0;
//input neo 
for(int i=0;i<2;i++){

for(int j=0;j<3;j++){

result[i][j]=m1[i][j]+m2[i][j];

}
}
*/






/* question 1
printf("enter roll and mark sequently ");
int ar[4][2]={1,32,2,34,3,45,4,67};
*/





/*
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){


printf("%d",arr[i][j]);


    }

printf("\n");

}














*/


    return 0;
}