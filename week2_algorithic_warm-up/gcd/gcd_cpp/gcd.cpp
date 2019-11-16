#include <iostream>


int GCD(int, int);

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << GCD(a, b) << std::endl;
    return 0;
}

int GCD(int a, int b) {
    if (b == 0)
        return a;
    int a_prime = a % b;
    return GCD(b, a_prime);
}
