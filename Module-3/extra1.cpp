#include<stdio.h>
int main(){
    int a , b;
    scanf("%d %d",&a , &b);
    if(1 <= a && a <= 1000 && 1 <= b && b <= 1000){
        if(a%b == 0 || b%a== 0){
            printf("Yes");
        }else{
            printf("No");
        }
    }else{
        printf("Please enter a number greater than 0 and less than or equal to 1000.\n");
    }
    return 0;
}