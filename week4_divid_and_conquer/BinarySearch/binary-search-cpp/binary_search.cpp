#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(const vector<int> & a, int key);
int binarySearchRec(const vector<int> & a, int iLeft, int iRight, int key);

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (size_t i = 0; i < a.size(); i++) {
	cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
	cin >> b[i];
    }
    for (int i = 0; i < m; ++i) {
	cout << binarySearch(a, b[i]) << ' ';
    }

    cout << endl;
    return 0;
}

// Search the array for the given key
// If found, return array index, otherwise, return -1
int binarySearch(const vector<int> & a, int key) {
    return binarySearchRec(a, 0, (int)a.size()-1, key);
}


// Recursive helper function for binarySearch
int binarySearchRec(const vector<int> & a, int iLeft, int iRight, int key) {

    // Test for empty list
    if (iLeft > iRight) return -1;

    // Compare with middle element
    int mid = (iRight + iLeft) / 2;   // truncate
    if (key == a[mid]) {
	return mid;
    } else if (key < a[mid]) {
	// Recursively search the lower half
	return binarySearchRec(a, iLeft, mid-1, key);
    } else {
	// Recursively search the upper half
	return binarySearchRec(a, mid+1, iRight, key);
    }
}
