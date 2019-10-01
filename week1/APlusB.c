#include <stdio.h>
#include <stdlib.h>

int sum_of_two_digit(int a, int b);

int main(void) {
    int num1, num2;
    printf("Enter the 2 numbers num1 and num2 \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    int result = sum_of_two_digit(num1, num2);
    printf("%d", result);

    printf("\n");
    return EXIT_SUCCESS;
}

int sum_of_two_digit(int a, int b) {
    return a+b;
}
