#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    // Example sorted array
    std::vector<int> arr = { 1, 2, 2, 2, 3, 3, 4, 5 };

    // Element to search for
    int element = 2;

    // Count the number of occurrences of element in arr
    int count = std::count(arr.begin(), arr.end(), element);

    std::cout << "The element " << element << " occurs " << count << " times in the array.\n";

    return 0;
}
