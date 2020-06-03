#include <iostream>

int last_digit_naive(int n);
int last_digit_fast(int n);

int main()
{
    int n;
    std::cin >> n;
    int c = last_digit_fast(n);
    std::cout << c << '\n';
    return 0;
}

int last_digit_naive(int n)
{
    if (n <= 1)
        return n;

    int previous = 0;
    int current = 1;

    for (int i = 0; i < n-1; ++i)
    {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}
// Efficient algorithm tha gives the last digit of fibonacci number
// Runtime T(n) = 2n + 2
int last_digit_fast(int n)
{
    int F[n+1];
    F[0] = 0;
    F[1] = 1;

    for (int i(2); i <= n; ++i)
        F[i] = (F[i-1] + F[i-2]) % 10;

    return F[n];
}
