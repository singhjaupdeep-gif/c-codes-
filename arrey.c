#include<stdio.h>
int main(){
    int arr[20],n;
    do{
        printf("\n1.Create data");
        printf("\n2.Display data");
        printf("\n3.Enter your choice");
        scanf("%d",&choice);
        switch (choice){
            case 0:
            break;
            case 1:
            printf("\nenter no of elements :");
            scanf("%d",&n);
            for (int i=0; i<n ; i++){
                printf("\nEnter no of elements:",i+1);
                scanf("%d",&arr[i]);
            }
            printf("\nArrey elements are:");
            for(int i=0; i<n; i++){
                printf("%d ",arr[i]);
            }
    return 0;
}