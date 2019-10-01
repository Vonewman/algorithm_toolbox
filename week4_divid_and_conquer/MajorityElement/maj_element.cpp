#include <algorithm>
#include <iostream>
#include <vector>

int majorityElement(const std::vector<int> & a)
{
    // m stores majority element (if present)
    int m;

    // initialize counter i with 0
    int i = 0;

    // do for each element a[j] of the vector
    for (int j = 0; j < a.size(); ++j) {
	// If the counter i becomes 0, we set the current candidate
	// to a[j] and reset the counter to 1
	if (i == 0)
	    m = a[j], i = 1;


	// If the counter is not 0, we increment or decrement the counter
	// according to whether a[j] is the current candidate
	else (m == a[j]) ? i++ : i--;
    }

    return m;
}


int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (size_t i = 0; i < a.size(); ++i) {
	std::cin >> a[i];
    }
    std::cout << majorityElement(a) << '\n';

    return 0;
}
