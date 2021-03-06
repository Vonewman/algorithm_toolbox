#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

unsigned int count(const vector<int> &a, int left, int right, int element)
{
    unsigned int count = 0;
    for (unsigned int i = left; i <= right; i++)
    {
	if (a[i] == element)
	{
	    count++;
	}
     }
    return count;
}


int majorityElement(vector<int> &a, int left, int right) {
    
	// Divide and Conquer Algorithm, O(nlog(n))
    if (left > right) return -1;
    if (left == right) return a[left];
    int mid = left + (right - left) / 2;
    int leftCount = majorityElement(a, left, mid);
    int rightCount = majorityElement(a, mid + 1, right);
    if (leftCount == -1 && rightCount != -1)
    {
	unsigned int num = count(a, left, right, rightCount);
	if (num > (right - left + 1) / 2)
	    {
		return rightCount;
	    }
	else
	    {
		return -1;
	    }

    }
    else if (rightCount == -1 && leftCount != -1)
    {
	unsigned int num = count(a, left, right, leftCount);
	if (num > (right - left + 1) / 2)
	{
	    return leftCount;
	}
	else
	{
	    return -1;
	}
    }
    else if (leftCount != -1 && rightCount != -1)
    {
	unsigned int leftNum = count(a, left, right, leftCount);
	unsigned int rightNum = count(a, left, right, rightCount);
	if (leftNum > (right - left + 1) / 2)
	{
	    return leftCount;
	}
	else if (rightNum > (right - left + 1) / 2)
	{
	    return rightCount;
	}
	else
	{
	    return -1;
	}
	}
    else
    {
	return -1;
    }

}


int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (size_t i = 0; i < a.size(); ++i) {
	cin >> a[i];
    }
    cout << (majorityElement(a, 0, a.size() - 1) != -1) << '\n';
}
