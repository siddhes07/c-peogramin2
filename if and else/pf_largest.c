// Read three integers and find the largest among them.

#include<stdio.h>
int main(){

    int a,b,c;
    printf("enter three integers : ");
    scanf( " %d %d %d",&a,&b,&c);

    if( a>=b && a>=c){
        printf( "%d largest is \n",a);
    }
    else if(b>=a && b>=c){
        printf("%d largest is  \n",b);
    }
    else{
        printf("%d largest is \n",c);
    }
    return 0;
}