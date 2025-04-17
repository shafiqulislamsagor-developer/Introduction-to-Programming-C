#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i = 0;i < N;i++){
        int index = 0;
        scanf("%d",&index);
        A[i] = index;
    }
    for(int i = N - 1 ; i >= 0 ; i--){
        if(i%2!=0){
            printf("%d ",A[i]);
        }
    }
    return 0;
}