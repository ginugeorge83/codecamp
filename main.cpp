#include <iostream>
#include <vector>
#include "Utils.h"
#include "Algorithms.h"

std::ostream& operator<<(std::ostream& out, std::vector<char> chars)
{
    int i = 0;
    while(chars[i] != '\0')
    {
        out << chars[i];
        if(chars[i + 1]!= '\0')
            out << ", ";
        i++;
    }
    return out;
}

int main()
{
    //--findLongestSubstring Begin--
    std::string inputString;
    std::cout << "Enter your string: " << std::endl;
    std::cin >> inputString;

    Algorithms algos;
    int length = algos.findLongestSubstring(Utils::getArray(inputString), inputString.length());
    std::cout << "Longest Substring Length: " << length << std::endl;
    
    std::vector<char> charArray = Utils::getArray(inputString);
    std::cout << charArray << std::endl;
    //--findLongestSubstring End--

    return 0;
}