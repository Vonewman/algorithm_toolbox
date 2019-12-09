#include <iostream>
#include <vector>
#include <algorithm>
/*Find the maximum product of two distinct numbers in a sequence of non-negative integers*/

int maxPairwiseProduct(const std::vector<int>& numbers);
long long maxPairwiseProductFast(const std::vector<int>& numbers);

int main(int argc, char *argv[])
{
    
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
        std::cin >> numbers[i];

    long long result = maxPairwiseProductFast(numbers);
    std::cout << result << "\n";
    return 0;
}

int MaxPairwiseProduct(const std::vector<int>& numbers) {
  int result = 0;
  int n = numbers.size();
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      result = std::max(result, numbers[i]*numbers[j]);
    }
  }

  return result;
}

long long maxPairwiseProductFast(const std::vector<int>& numbers)
{
    int n = numbers.size();

    int max_index1 = -1;
    for (int i = 0; i < n; ++i) {
	if ((max_index1 == -1) || (numbers[i] > numbers[max_index1])) {
	    max_index1 = i;
	    }
    }

    int max_index2 = -1;
    for (int j  = 0; j < n; ++j) {
	if ((j != max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2]))) {
	    max_index2 = j;
	    }
    }
    
    return ((long long) (numbers[max_index1])) * numbers[max_index2];
}
