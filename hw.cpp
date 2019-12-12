#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

std::string dec_to_oct(int number)
{
    std::string result;
    while (number > 0)
    {
        char digit = '0' + number % 8;
        result = digit + result;
        number /= 8;
    }
    return result;
}



int main()
{
    int x;
    std::cin >> x;
    std::cout << dec_to_oct(x);
    return 0;
}
