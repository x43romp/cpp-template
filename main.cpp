#include <iostream>

int main()
{

    // Basic Hello World - making sure cout works
    std::cout << "Hello World\n";

    // Testing cin
    int number = -1;
    std::cout << "Pick a number: ";
    std::cin >> number;

    for (int i = 1; i <= number; i++)
    {
        std::cout << i << "\n";
    }

    return 0;
}