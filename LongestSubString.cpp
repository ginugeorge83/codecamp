#include <iostream>
#include <vector>

// Program to print the longest substring with no repeating characters from a given array

int findLongestSubstring(char* a, int n)
{
    int left = 0, right = 0;
    int longest = 0;

    std::vector<int> charMap(256, -1);
    while(right < n)
    {
        if(charMap.at(a[right]) != -1)
        {
            left = std::max(left, a[right] + 1);
        }
        charMap[a[right]] = right;
        longest = std::max(longest, right - left + 1);
        right++;
    }

    return longest;
}

int main()
{
    char a[10] = {'g', 'i', 'n', 'u', 'g', 'e', 'o', 'r', 'g', 'e'};
    int n = findLongestSubstring(a, 10);
    std::cout << "Longest substring length: " << n << std::endl;
    return 0;
}