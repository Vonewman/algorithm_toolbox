#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binarySearch(const vector<int> &a, int x) {
    /*
      renvoie si elle existe la position d'une occurence de x dans a
      supposé trié, et None sinon
     */

    int g = 0, d = (int)a.size();
    while (g <= d) {
	int mid = (g + d) / 2;
	if (a[mid] == x) {
	    return mid;
	}
	if (a[mid] < x) {
	    g = mid+1;
	} else {
	    d = mid-1;
	}
    }

    return -1;
}
	    
	
int main() {
    int n;
    std::cin >> n;
    vector<int> a(n);
    for (size_t i = 0; i < a.size(); i++) {
	std::cin >> a[i];
    }

    int m;
    std::cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i)  {
	std::cin >> b[i];
    }

    for (int i = 0; i < m; ++i) {
	std::cout << binarySearch(a, b[i]) << ' ';
    }

    std::cout << std::endl;
    return 0;
}
