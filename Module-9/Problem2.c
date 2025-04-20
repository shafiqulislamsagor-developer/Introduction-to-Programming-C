#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i < n;i++){
        scanf("%d",&arr[i]);
    }
    int idx;
    scanf("%d",&idx);
    int arr2[n-1];
    for (int i = 0; i < n; i++)
    {   
        if (i < idx)
        {
            arr2[i] = arr[i];
        }
        else{
            arr2[i] = arr[i+1];
        }
    }
    for(int i=0; i < n-1;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}