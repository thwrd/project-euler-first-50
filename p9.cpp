#include <iostream>
#include <string>

int main()
{
    long s = 100000;
    for (long a = 1; a <= s - 2; a++)
    {
        for (long b = a + 1; b <= s - a - 1; b++)
        {
            long c = s - a - b;
            if (a * a + b * b == c * c)
            {
                std::cout << "a " << a << " b " << b << " c " << c << std::endl;
                std::cout << a * b * c << std::endl;
            }
        }
    }
    return 0;
}
