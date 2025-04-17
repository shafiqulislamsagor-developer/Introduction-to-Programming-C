#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int Psum = 0;
    int Nsum = 0;
    for(int i=0;i < N;i++){
        int value = 0;
        scanf("%d",&value);
        if(0 <= value){
            Psum = Psum + value;
        }else{
            Nsum = Nsum + value;
        }
    }
    printf("%d %d",Psum,Nsum);
    return 0;
}