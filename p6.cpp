#include <iostream>

using namespace std;

int main()
{
    long sumOfSquares = 0;
    long squareOfSum = 0;
    long n = 1000000;
    for (int i = 1; i <= n; i++)
    {
        sumOfSquares += (i * i);
        squareOfSum += i;
    }
    cout << ((squareOfSum * squareOfSum) - sumOfSquares) << endl;
    return EXIT_SUCCESS;
}
