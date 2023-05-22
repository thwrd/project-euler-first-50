#include <iostream>

using namespace std;

int main(void)
{
    long j = 600851475143L;
    // int j = 13195;
    long l = j;
    for (long i = 2; i <= j; i++)
    {
        if (j % i == 0)
        {
            j /= i;
            l = i;
        }
    }
    cout << l << endl;
}
