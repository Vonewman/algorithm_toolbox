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
	if (dist < tank)
		return 0;
	int curr_fuel = tank;
	int cur_distance = 0;
	int num_stops = 0;

	stops.push_back(dist);
	stops.insert(stops.begin(), 0);

	for (int i = 0; i < stops.size() - 1; i++)
	{
		if ((stops[i+1] - stops[i]) > tank)
		{
			return -1;
		} else if ((stops[i+1] - stops[i]) > curr_fuel) {
			num_stops += 1;
			curr_fuel = tank;
			curr_fuel -= (stops[i+1] - stops[i]);
		} else {
			curr_fuel -= (stops[i+1] - stops[i]);
		}
	}


	return num_stops;
}
