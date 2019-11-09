#include <iostream>
#include <cassert>


long long int fibonacci_naive(int n);
long long int fibonacci_fast(int n);
void test_solution();

int main()
{
    int n = 0;
    std::cin>> n;


    test_solution();
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}

// Naive Algorithm that compute the fibonacci number.
// Runtime T(n) = T(n-2) + T(n-1) + 3
long long int fibonacci_naive(int n)
{
    if (n <= 1)
        return n;

    return (long long) fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

// Efficient algorithm that compute the fibonacci number
// Runtime T(n) = 2n - 1
long long int fibonacci_fast(int n)
{
    int F[n];
    F[0] = 0;
    F[1] = 1;

    for (int i=2; i <=n; ++i)
        F[i] = F[i-1] + F[i-2];

    return ((long long int) F[n]);
}

void test_solution()
{
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_fast(n));
}
