#include<stdio.h>
int main(){
    int i;
    printf("Print all odd numbers from 1 to 100:\n");
    scanf("%d",&i);

    for (int  i = 0; i <= 100; i++){
    
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}