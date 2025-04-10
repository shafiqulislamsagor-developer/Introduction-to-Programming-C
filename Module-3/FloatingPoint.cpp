#include<stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    if(1.0 <= x && x <= 100.0){
        printf("%.3f",x);
    }else{
        printf("Not accept your value");
    }
    return 0;
}