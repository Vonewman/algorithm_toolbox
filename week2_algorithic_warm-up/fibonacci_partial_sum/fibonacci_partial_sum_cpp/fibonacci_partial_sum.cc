/*
 * Naive Implementation of the last digit of a "partial" sum of
 * Fibonacci numbers: Fm + F(m+1) + ... + Fn
 * Author: Abdoulaye DIALLO
 * Time Compexity: O(n)
**/

#include <iostream>
#include <vector>
using namespace std;

long long fibonacci_partial_sum(long long, long long);

int main() {
    long long m, n;
    cin >> m >> n;
    cout << fibonacci_partial_sum(m, n) << '\n';
    return 0;
}


long long fibonacci_partial_sum(long long m, long long n) {
    long long sum = 0;

    long long current = 0;
    long long next = 1;

    for (long long i = 0; i <= n; ++i) {
	if  (i >= m) {
	    sum += current;
	}

	long long new_current = next;
	next = next + current;
	current = new_current;
    }

    return sum % 10;
}
