#include <iostream>
#include <cassert>

long long gcd(long long int, long long int);
long long lcm(long long, long long);
void test();

int main()
{
    long long int a, b;
    std::cin >> a >> b;
    test();
    std::cout << lcm(a, b) << std::endl;
    return 0;
}

long long gcd(long long int a, long long int b) {
    if (b == 0)
        return a;

    int a_prime = a % b;
    return gcd(b, a_prime);
}

long long lcm(long long a, long long b) {
    return ((long long) (a*b)/gcd(a, b));
}

void test()
{
    assert(lcm(6, 8) == 24);
    assert(lcm(12, 9) == 36);
    
}
