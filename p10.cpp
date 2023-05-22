#include <iostream>
#include <string>
#include <vector>

// Summation of primes
int main()
{
    int max = 2000000;
    long sum = 2;
    std::vector<int> primes = {2};
    long slow = 0;
    long fast = 0;
    for (int i = 3; i <= max; i += 2)
    {
        bool prime = true;
        for (int p : primes)
        {
            slow++;
            if (i % p == 0)
                break;
        }

        for (int p : primes)
        {
            fast++;
            if (p * p > i)
                break;
            if (i % p == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            sum += i;
            primes.push_back(i);
        }
    }
    std::cout << primes.size() << std::endl;
    std::cout << "slow " << slow << std::endl;
    std::cout << "fast " << fast << std::endl;
    std::cout << sum << std::endl;
    return 0;
}
