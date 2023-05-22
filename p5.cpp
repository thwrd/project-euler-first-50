#include <iostream>
#include <unordered_set>

using namespace std;

long findLcm(long a, long b)
{
    long lo = a < b ? a : b;
    long hi = a > b ? a : b;
    long gcd = lo;
    for (; gcd > 0; gcd--)
    {
        if (hi % gcd == 0 && lo % gcd == 0) {
            break;
        }
    }
    long product = a * b;
    long lcm = (a * b) / gcd;
    return lcm;
}

long smallestNumberEvenlyDivisibleUpto(long n)
{
    if (n <= 2)
        return n;
    long product = 1;
    for (long i = 2; i <= n; i++)
    {
        // cout << "i is " << i << " product " << product << endl;
        product = findLcm(i, product);
    }
    return product;
}

int main()
{
    int i = 1;
    bool found = false;
    while (!found) {

        for (int j = 1; j<=20; j++) {
            if (i%j != 0) {
                i++;
                break;
            } else if(j == 20) {
                cout << i << endl;
                found = true;
                break;
            }
        }
    }
    cout << smallestNumberEvenlyDivisibleUpto(20) << endl;
    return EXIT_SUCCESS;
}
