//Print the first n terms of the Fibonacci series using a for loop.

#include<stdio.h>
int main(){

    int n,a=0,b=1,c;
    
    printf("enter the value of n : ");
    scanf( "%d",&n);

    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}