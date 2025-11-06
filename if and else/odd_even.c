//ad an integer and determine whether it is odd or even also check if it is positive,
//negative, or zero.

#include<stdio.h>
int main(){
     int a;
     printf("enter the three integers : ");
     scanf( " %d",&a);

     if(a%2==0){
        printf("%d is even \n",a);
     } else if(a%2!=0){
        printf("%d is odd \n",a);
     } else if(a>0){
        printf("%d is positive \n",a);

     } else{
        printf("%d is negavtive number\n",a);
     }
    return 0; 
        }
