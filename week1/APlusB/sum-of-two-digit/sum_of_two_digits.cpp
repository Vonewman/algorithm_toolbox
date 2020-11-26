#include <iostream>
#include <stdio.h>

/* A program that gives you the sum of two digits*/
int sum(int a, int b);
int main()
{
    int num1, num2;
    printf("Enter the 2 numbers num1 and num2 \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    std::cout << sum(num1, num2) << std::endl;
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}
