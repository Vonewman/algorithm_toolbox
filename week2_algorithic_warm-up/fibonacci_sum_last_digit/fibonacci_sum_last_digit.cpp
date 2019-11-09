#include <iostream>


int fibonacciSumLastDigit(int);

int main()
{
    int n;
    std::cin >> n;
    std::cout << fibonacciSumLastDigit(n) << '\n'; 
}

int fibonacciSumLastDigit(int n)
{
    //This function compute the last digit of the sum of the fibonacci number
    if (n <= 0)
        return 0;

    int fib[n+1];
    fib[0] = 0 , fib[1] = 1;

    int sum = fib[0] + fib[1];

    for (int i=2; i <= n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        sum += fib[i];
    }

    return sum % 10;
}
