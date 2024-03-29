
//chp3ex2

#include <iostream>
#include <vector>
#include <algorithm>


double getQuartile(const std::vector<int>& numbers, int quartile) {
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int size = sortedNumbers.size();
    if (size % 2 == 1) {
      
        return sortedNumbers[quartile * size / 4 - 1];
    }
    else {
        
        int mid1 = sortedNumbers[(quartile - 1) * size / 4];
        int mid2 = sortedNumbers[quartile * size / 4];
        return (mid1 + mid2) / 2.0;
    }
}

int main() {
    std::vector<int>numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    std::cout << "1사분위 수" << getQuartile(numbers, 1) << std::endl;

    std::cout << "2사분위 수" << getQuartile(numbers, 2) << std::endl;

    std::cout << "3사분위 수" << getQuartile(numbers, 3) << std::endl;

    return 0;
}
