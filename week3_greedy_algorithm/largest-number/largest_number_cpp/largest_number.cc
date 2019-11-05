#include <string>
#include <vector>
#include <algorithm>

std::string largest_number(std::vector<int> arr) {
    std::vector<int> arr1; 
    for (int i = 0; i < arr.size(); i++)
    {
        arr1.push_back(*max_element(arr.begin(), arr.end()));
        arr.pop_back(*max_element(arr.begin(), arr.end()));
    }
    
    
}