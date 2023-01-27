#include<stdio.h>

int sum(int fn,int sn);

void main (){
    printf("Main function \n");
    int fn, sn, nsum;
    printf("Enter first number \n");
    scanf("%i", &fn);

    printf("Enter second number \n");
    scanf("%i", &sn);

    nsum = sum(fn, sn);
    printf("The sum of %i + %i is %i \n",fn, sn, nsum);

}


int sum(int fn,int sn){
    printf("this is the sum function \n");
    int ans;
    ans = fn + sn;
    printf("%i \n", ans);

    return ans;
}