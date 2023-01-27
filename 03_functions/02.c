#include<stdio.h>

void sum(int fn,int sn);

void main (){
    printf("Main function \n");
    int fn, sn;
    printf("Enter first number \n");
    scanf("%i", &fn);

    printf("Enter second number \n");
    scanf("%i", &sn);

    sum(fn, sn);


}


void sum(int fn,int sn){
    printf("this is the sum function \n");
    int ans;
    ans = fn + sn;
    printf("%i \n", ans);
}