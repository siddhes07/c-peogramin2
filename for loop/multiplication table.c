#include<stdio.h>
int main(){
    int n,i=1;

    printf(" enter a value of n : ");
    scanf("%d",&n);

    while(i<=10){
        printf("%d*%d=%d \n" ,n,i,n*i);
        i++ ;
        }
        printf("\n");
        return 0;
}