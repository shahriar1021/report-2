#include<stdio.h>
int main()
{
    int num1, num2, sum, diffrent, product, quotient, modulus;
    printf("Input first number: ");
    scanf("%d",& num1);
    printf("Input second number: ");
    scanf("%d",& num2);
    sum=num1+num2;
    diffrent=num1-num2;
    product=num1*num2;
    quotient=num1/num2;
    modulus=num1%num2;
    printf("Sum = %d\n",sum);
    printf("Diffrent = %d\n",diffrent);
    printf("Product = %d\n",product);
    printf("Quotient = %d\n",quotient);
    printf("Modulus = %d\n",modulus);
    return 0;
}
