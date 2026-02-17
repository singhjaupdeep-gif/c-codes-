#include <stdio.h>
int main(){
    int arr[20], n, choice,pos ,m;
    do{
        printf("\n1.Create data");
        printf("\n2.Display data");
        printf("\nEnter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
            case 0:
            break;
            case 1:
            printf("\nenter no of elements :");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("\nEnter no of elements:", i + 1);
                scanf("%d", &arr[i]);
            }
            case 2:
            printf("\nArrey elements are:");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            case 3:
            printf("\n count: %d",n);
            case 4:
            printf("\nEnter no of elements that you want to append:");
            scanf("%d",&m);
            for(int i=0; i<m+n; i++){
                printf("\nEnter elements no. %d:",i+1);
                scanf("%d",&arr[i]);
            }
            n=n+m;
            break;
            case 5:
            printf("\nEnter the position");
            scanf("%d",&pos);
            if(pos>n){
                printf("\nKindly enter valid ");
            }


        }}
        while (choice != 0)
            ;

        return 0;
    }


