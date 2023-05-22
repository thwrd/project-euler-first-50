#include <iostream>
#include <vector>

int main()
{
    std::vector<int> primes = {2};
    int i = 3;
    while (primes.size() < 10001)
    {
        bool isPrime = true;
        for (int v : primes)
        {
            if (v * v > i)
                break;
            if (i % v == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            primes.push_back(i);
        i += 2;
    }
    std::cout << primes[10000] << std::endl;
}
