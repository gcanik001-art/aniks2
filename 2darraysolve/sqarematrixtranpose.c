#include<stdio.h>
int main(){


/*int arr[2][3];
for(int i=0;i<2;i++){

for(int j=0;j<3;j++){
scanf("%d  ",&arr[i][j]);


}
printf("\n");
*/

//matrix multification  res i j = a i k * b k i jekane k chole 0 teke n porzonto jekane n holo 1st ar tarr col or 2nd tar row songkha 
int m;
printf("enter the num of row 1st mat");
scanf("%d",&m);

int n;
printf("enter the num of col 1st mat");
scanf("%d",&n);
int a[m][n];


int p;
printf("enter the num of row 2st mat");
scanf("%d",&m);

int q;
printf("enter the num of col 2st mat");
scanf("%d",&n);

int b[p][q];
//cheack

if(n!=p)
printf("the mat cant be multipie");
//then 2 ta matrix ar input neo oitar upor base kore 
else{

int res[m][q];
for(int i=0;i<m;i++){

for(int j=0;j<q;i++){

res[i][j]=0;
//i row of a and j colum of b; and n=p
for(int k=0;k<n;k++){
    res[i][j]+=a[i][k]*b[k][j];
}

//now print thiss matrix res ta 

}





}

















 //Rotate a matrix 90 degrees clockwise





//squre maxrix ko transpose  i j re j i ar jaiga swap korte hobe just loop ar bitor oije temp diye swap krbo 
//but but but  half time a thamaia jaite hobe nahole again swap hoia jabe 
//so  i jdi  0 teke n-1 porzonto jai tahole j jabe 1 teke n-1 porzonto  or j=0 teke j<==i porzonto jaileo hobe 
 








return 0;
}