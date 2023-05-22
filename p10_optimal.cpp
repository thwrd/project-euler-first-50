#include <iostream>
#include <string>
#include <vector>
#include <bitset>

// Summation of primes
int main()
{
    const size_t max = 2000000;
    std::bitset<max> bits;
    // sieve of erasthosthenes
    // find first number not "crossed out"
    // it is a prime
    // "cross out" all multiples of this number
    // stop when candidates for p >= sqrt of max
    int p = 3;
    long sum = 2;
    while (p < max)
    {
        if (bits[p] != 1)
        {
            sum += p;
            int temp = p + p;
            while (temp <= max)
            {
                bits[temp] = 1;
                temp += p;
            }
        }
        p += 2;
    }
    std::cout << sum << std::endl;
    return 0;
}
