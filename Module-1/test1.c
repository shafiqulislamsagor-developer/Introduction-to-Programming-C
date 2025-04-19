#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int Arr[a];
    for(int i = 0;i < a;i++){
        int value;
        scanf("%d",&value);
        Arr[i] = value;
    }
    int Arr2[a];
    int index , value;
    scanf("%d %d",&index,&value);
    for (int i = 0; i < a; i++)
    {
        if(i == index){
            Arr2[i]= value;

        }
        else if (index < i)
        {
            Arr2[i] = Arr[i-1];
        }
        else{
            Arr2[i]= Arr[i];
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ",Arr2[i]);
    }
    
}