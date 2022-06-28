#include<stdio.h>

int main(){
    int *a, p=5;
    a=&p;
    printf("a is: %d",p); //prints value of p
    printf("\na is: %d",*a); //prints the value at the address pointed by pointer variable a
    return 0;
}