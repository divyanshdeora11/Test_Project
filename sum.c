 #include<stdio.h>

 int main(){
    int a, b;
    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);
    
    int sum = a+b;

    printf("Sum of A & B = %d", &sum);

    return 0 ;
 }