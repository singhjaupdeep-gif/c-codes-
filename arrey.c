#include <stdio.h>
int main(){
    int arr[20], n, choice;
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
        }}
        while (choice != 0)
            ;

        return 0;
    }


