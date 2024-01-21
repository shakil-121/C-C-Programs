#include<stdio.h>
int main(){
    int a[] = {10,20,50,160,60,120,100};

    int i;
    int max = a[0];//max = 10;
    for( i = 0; i<7; i++){
        if(a[i+1]> max ){
            max = a[i+1];
        }
    }
    printf("The Maximum element is: %d", max);
}
