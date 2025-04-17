#include<stdio.h>
int main(){
    int N,X,V;
    scanf("%d",&N);
    int A[N];
    for(int i = 0 ; i < N ; i++){
        int value = 0;
        scanf("%d",&value);
        A[i] = value;
    }
    scanf("%d %d",&X,&V);
    A[X] = V;
    for(int i = N-1;i >= 0;i--){
        printf("%d ",A[i]);
    }
    return 0;
}