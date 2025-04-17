#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(0 < N){
        for(int i = 1 ; i <= N ; i++){
            printf("%d ",i);
        }
    }else if (0 > N)
    {
        for(int i = N ; i <= 0 ; i++){
            printf("%d ",i);
        }
    }else{
        printf("%d",N);
    }
    
    return 0;
}