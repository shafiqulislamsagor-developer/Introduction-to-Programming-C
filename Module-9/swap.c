#include<stdio.h>
int main(){
    int a = 2;
    int b = 3;
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d",a,b);
    return 0;
}