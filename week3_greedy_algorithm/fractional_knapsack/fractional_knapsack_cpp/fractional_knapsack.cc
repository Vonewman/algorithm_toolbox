#include <iostream>

using namespace std;

int maxVal(int a, int b)
{
    if (a < b)
	return a;
    else
	return b;
}

int main()
{
    int num, W;
    cout << "Enter the number of differents items : ";
    cin >> num;
    int val[num], wt[num];
    cout << "Enter the values : ";
    for (int i=0; i<num; ++i) {
	cin >> val[i];
    }
    cout << "Enter the weights : ";
    for(int i=0; i<num; ++i) {
	cin >> wt[i];
    }
    cout << "Enter Max weight of the Knapsack : ";
    cin >> W;
    
    return 0;
}
