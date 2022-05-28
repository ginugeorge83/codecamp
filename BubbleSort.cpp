#include <iostream>

int main()
{
    std::cout << "Bubble sort algorithm" << std::endl;
    int n;
    std::cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    // Bubble sort begin
    int counter = 1;
    while(counter < n - 1)
    {
        for(int i = 0; i < n - counter; i++)
        {
            if(a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
counter++;        
    }
    // Bubble sort end

    for(int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }

    std::cout << std::endl;
}