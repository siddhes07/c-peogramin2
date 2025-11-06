// Read a integer - if it is divisible by 5 and 7 print - Hello world else print - Bye.

#include<stdio.h>
int main(){
    int n;

    printf(" enter a number : ");
    scanf ("%d",&n);

    if(n%5==0 && n%7==0){
        printf("hellow world \n");
    }else{
        printf("bye \n");
    }
}