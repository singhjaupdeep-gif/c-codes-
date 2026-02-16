// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k <= i; k++)
//         {
//             printf("*");
//         }
    
//     printf("\n");
// }
// return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%D",&n);
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<i;j++)
//         {
//             printf(" ");
//         }
//         for(int k=0;k<n-i;k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i, j;

//     for(i = 1; i <= 5; i++) {          
        
//         for(j = 1; j <= 5 - i; j++) {  
//             printf(" ");
//         }

//         for(j = 1; j <= i; j++) {    
//             printf("* ");
//         }

//         printf("\n");
//     }

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int i, j;

//     for(i = 1; i <= 5; i++) {          
//         for(j = 1; j <= 5 - i; j++) {  
//             printf(" ");
//         }
//         for(j = 1; j <= i; j++) {     
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int i, j;
//     for(i = 5; i >= 1; i--) {  
//         for(j = 1; j <= 5 - i; j++) { 
//             printf(" ");
//         }
//         for(j = 1; j <= i; j++) {  
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i=0; i<5; i++){
//         for(int j=0; j<i; j++){
//             printf("*");
//         }
//     }printf("\n");
// }

// #include<stdio.h>
// int main(){
//     for(int i=0; i<5; i++){
//         for (int j=5; j>=i; j--)
//         {
//             printf("*");
//         }
//     }printf("\n");
// }
#include <stdio.h>
int main() {
    for(int i = 0; i < 5; i++) {
        for(int j = 5; j >= i; j--) {
            printf("*");
        }
        printf("\n"); // newline after each row
    }
    return 0;
}