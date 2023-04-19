#include <iostream>

int main()
{
    int x {30};
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "👀";
        }
        std::cout << std::endl;
    }
    for (int i = x; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "👀";
        }
        std::cout << std::endl;
    }
    
    return 0;
}