#include <cinttypes>
#include <cstdio>
#include <iostream>

#define MAX 93

/* Algorithm */
uint64_t fib(uint64_t n) {
	static uint64_t f1 = 1,
					f2 = 2;  // using static keyword woll retain the values of
							// f1 and f2 for the next function call.
	
	if (n <= 2)
		return f2;
	if (n >= 93) {
		std::cerr
			<< "Cannot compute for n>93 due to limit of 64-bit integers\n";
		return 0;
	}

	uint64_t temp = f2;  // we do not need temp to be static
	f2 += f1;
	f1 = temp;

	return f2;
}


int main()
{
	// Main Function
	for (uint64_t i = 1; i < 93; i++) {
		std::cout << i << " th fibonacci number is " << fib(i) << std::endl;
	}
	return 0;
}
