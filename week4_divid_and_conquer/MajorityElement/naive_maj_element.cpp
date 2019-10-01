#include <iostream>
#include <vector>

int majorityElement(const std::vector<int> & a)
{
    int currentElement, count;
    for (int i = 0; i < a.size(); ++i) {
	currentElement = a[i];
	count = 0;
	for (int j = 0; j < a.size(); ++j) {
	    if (a[j] == currentElement) {
		count++;
	    }
	}

	if (count > n/2) {
	    return a[i];
	}
    }

    return NOT_FOUND;

}
