#include<stdio.h>

void another_fuction();

void main(){
    printf("main function \n");
    another_fuction(); // calling another function
}


void another_fuction(){
    printf("Second function \n");
}
