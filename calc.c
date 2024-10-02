#include <stdio.h>

int adding(int a,int b);
int main(void){
    int x = 10;
    int y = 12;
    printf("hello\n");
    adding(x,y);
    
    return 0;
}

int adding(int a,int b){
    int sum = a + b;
    printf("sum: %i  \n", sum);
}