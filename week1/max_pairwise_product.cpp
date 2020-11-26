#include <iostream>
#include <vector>
/*Find the maximum product of two distinct numbers in a sequence of non-negative integers*/

long long MaxPairwiseProduct(const std::vector<int>& numbers);
long long MaxPairwiseProductFast(const std::vector<int>& numbers);

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
        std::cin >> numbers[i];

    long long result = MaxPairwiseProductFast(numbers);
    std::cout << result << "\n";
    return 0;
}

long long MaxPairwiseProduct(const std::vector<int>& numbers)
{
    long long result = 0;
    int n = numbers.size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (((long long)numbers[i]) * numbers[i] > result)
            {
                result = ((long long)numbers[i]) * numbers[j];
            }
        }
    }
    return result;
}

long long MaxPairwiseProductFast(const std::vector<int>& numbers)
{
    // A faster algorithm 
    int n = numbers.size();

    int max_index1 = -1;
    for (int i = 0; i < n; ++i)
    {
        if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
        {
            max_index1 = i;
        }
    }
    
    int max_index2 = -1;
    for (int j = 0; j < n; ++j)
    {
        if ((numbers[j] != numbers[max_index1]) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
        {
            max_index2 = j;
        }
    }
    return ((long long) (numbers[max_index1])) * numbers[max_index2];
}
