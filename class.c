// #include<stdio.h>
// #include<stdbool.h>

// int main(){
//     int a;
//     char ch;
//     float f;
//     char s1[20];
//     double d;
//     bool flag=true;

//     scanf("%d\n",&a);
//     scanf("%c\n",&ch);
//     scanf("%f\n",&f);
//     scanf("%s\n",&s1);
//     scanf("%lf\n",&d);

//     printf(" \n int: %d",a);
//     printf(" \n char: %c",ch);
//     printf(" \n float: %f",f);
//     printf(" \n char: %s",s1);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i,sum=0;
//     for(i=1;i<=10;i++){
//         sum=sum+i;
//     }
//     printf("%d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i,sum=3;
//     for(i=1;i<=10;i++){
//         printf("%d x %d = %d\n", sum, i, sum * i);
//     }
//     return 0;
// }

                                             // table printing in vertical 

// #include<stdio.h>
// int main(){
//     int i,num=4;
//     for(i=1;i<=10;i++){
//         printf("\n%d \nx \n%d \n= \n%d\t",num, i,num*i);
//     }
// }

// #include<stdio.h>
// int main(){
//     int marks;
//     printf("enter marks(0-100):");
//     scanf("%d",&marks);
//     if (marks>=0 && marks<=30){
//         printf("FAIL \n");
//     }else if (marks>30 && marks<=100){
//         printf("PASS \n");
//     }else{
//         printf("Wrong marks enter correct marks");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num, i;
//     printf("enter no.\n");
//     scanf("%d",&num);
//     for(i=2; i<num; i++){
//         if (num%i==0){
//             printf("%d is not pr", num);
//             break;
//         }
//         else{
//             printf("%d is pr", num);
//             break;
//         }

//     }
// }

                                        // sum of n even no.
                                         
// #include<stdio.h>
// int main(){
//     int num;
//     printf("enter any no.:");
//     scanf("%d",&num);
//     int sum=0;
//     for(int i=1;i<=num; i++){
//         if(i%2==0){
//             sum+=i;
//         }
//     }
//     printf(" sum of even is %d", sum);
//     return 0;
// }

                                            // code to reverse a digit

// #include<stdio.h>
// int main(){
//     int num,reminder,reverse=0;
//     printf("enter an integer:");
//     scanf("%d",&num);
    
//     while (num!=0)
//     {
//         reminder= num % 10;
//         reverse= reverse * 10 + reminder;
//         num /= 10;
//     }
//     printf("%d is its reverse",reverse);
// }
                                            // square printing
// #include<stdio.h>
// int main(){
//     for(int i=0; i<5;i++){
//         for (int j=0;j<5;j++){
//             printf("*");

//         }
//         printf("\n");
//     }
// }
                                            // triangle printing
// #include<stdio.h>
// int main(){
//     for(int i=0; i<5;i++){
//         for (int j=0;j<i+1;j++){
//             printf("*");

//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i=0; i<5;i++){
//         for (int j=0;j<i+1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i=0; i<5;i++){
//         for (int j=0;j<5-i;j++){
//             printf("");
//         }for(int k=0;k<2*i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main() {
//     int rows, i, j;

//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     for(i = 1; i <= rows; i++) {
//         for(j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i=0; i<5; i++)
//     {
//         for(int j=0; j<i; j++)
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
