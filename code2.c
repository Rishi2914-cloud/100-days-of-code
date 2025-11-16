#include<stdio.h>
int main()
        {
            float num1 ,num2 ,sum ,difference ,product ,quotient;
            printf("Enter the first number: ");
            scanf("%f" ,&num1);

            printf("Enter the second number: ");
            scanf("%f" ,&num2);

            sum = num1 + num2;
            difference = num1 - num2;
            product = num1 * num2;
            quotient = num1/num2;

            printf("sum = %f\n" ,sum);
            printf("differnce = %f\n" ,difference);
            printf("product = %f\n" ,product);
            printf("quotient = %f\n" ,quotient);

            return 0;

        }