#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(1<=N && N <= 1000){
        for(int i=1 ; i<= N; i++){
            printf("I Love Practice \n");
        }
    }else{
        printf("Please enter a number greater than 0 and less than or equal to 1000.\n");
    }
    return 0;
}