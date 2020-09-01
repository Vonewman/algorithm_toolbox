#include <iostream>
#include <vector>


using namespace std;

int compute_min_refills(int, int, vector<int>&);

int main()
{
	int d = 0;
	cin >> d;
	int m = 0;
	cin >> m;
	int n = 0;
	cin >> n;

	vector<int> stops(n);
	for (size_t i = 0; i < n; ++i)
		cin >> stops.at(i);

	cout << compute_min_refills(d, m, stops) << "\n";

	return 0;
}


int compute_min_refills(int dist, int tank, vector<int>& stops) 
{
	return -1;
}
