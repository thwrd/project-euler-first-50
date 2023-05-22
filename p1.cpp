#include <iostream>

long sumDivBy(long f, long ceiling)
{
    long n = ceiling / f;
    return f * (n * (n + 1)) / 2;
}

int main()
{
    long ceiling = 999;
    long total = sumDivBy(3, ceiling) + sumDivBy(5, ceiling) - sumDivBy(15, ceiling);
    std::cout << total << std::endl;
    return 0;
}