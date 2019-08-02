#include <iostream>



int NaiveGCD(int, int);
int EuclidGCD(int, int);

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << NaiveGCD(a, b) << std::endl;
    return 0;
}

int NaiveGCD(int a, int b) {
    int current_gcd = 1;
    for (int d = 2; d <= a && d <= b; d++) {
        if (a % d == 0 && b % d == 0) {
            if (d > current_gcd) { current_gcd = d; }
        }
    }
    return current_gcd;
}

int EuclidGCD(int a, int b) {
    if (b == 0)
        return a;
    int a_prime = a % b;
    return EuclidGCD(b, a_prime);
}