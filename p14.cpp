#include <iostream>

int main()
{
    std::cout << "Here we go...." << std::endl;
    long foo[1000000] = {};
    long max = 1;
    long maxProd = 1;
    for (long i = 1; i <= 1000000; i++)
    {
        long n = i;
        if (foo[i] != 0)
            continue;
        long j = 1;
        while (n != 1)
        {
            n = n % 2 == 0 ? n / 2 : 3 * n + 1;
            if (n > 0 && n <= 1000000 && foo[n] != 1)
            {
                j += foo[(long)n];
                n = 1;
            }
            else
            {
                j++;
            }
        }
        foo[i] = j;
        max = j > max ? j : max;
        maxProd = j == max ? i : maxProd;
    }
    std::cout << "max...." << max << std::endl;
    std::cout << "maxProd.. " << maxProd << std::endl;
    return 0;
}