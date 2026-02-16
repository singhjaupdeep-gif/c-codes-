#include<stdio.h>
int main(){
    int arr[20],n;
    printf("\nenter no of elements :");
    scanf("%d",&n);
    for (int i=0; i<n ; i++){
        printf("\nEnter no of elements:");
        scanf("%d",&arr[i]);
    }
    printf("\nArrey elements are:");
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
    return 0;
}