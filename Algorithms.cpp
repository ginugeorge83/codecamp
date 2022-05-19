#include "Algorithms.h"

int Algorithms::findLongestSubstring(const std::vector<char>& characters, const int n)
{
    int left = 0, right = 0;
    int longest = 0;

    std::vector<int> charMap(256, -1);
    while(right < n)
    {
        if(charMap.at(characters[right]) != -1)
        {
            left = std::max(left, characters[right] + 1);
        }
        charMap[characters[right]] = right;
        longest = std::max(longest, right - left + 1);
        right++;
    }
    return longest;
}