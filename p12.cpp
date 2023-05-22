#include <iostream>
#include <string>
#include <vector>

int main()
{
    // try starting with a number which has 500 divisors
    bool found = false;
    long n = 0;
    long t = n;
    std::cout << "Here we go...." << std::endl;

    while (found == false)
    {
        // find all prime numbers up to sqrt n
        // put them in an array
        // loop through the array and divide n by the prime
        // if found, add the prime to a map with 1 as the value v if 
        // it hadn't existed or v + 1 if it did
        // then, for all v in the map, multiply (v0 + 1)(v1 + 1)...(vm + 1)
        // if the product of this multiplication is > 500, we have found our n

        n++;
        t += n;
        int f = 1;
        for (long i = 2; i <= t; i++)
        {
            if (t % i == 0)
            {
                f++;
            }
        }
        if (f > 100)
        {
            std::cout << "DEBUG  " << f << " " << t << std::endl;
        }
        if (f > 500)
        {
            found = true;
            std::cout << t << std::endl;
            return 0;
        }
    }
    return 0;
}
