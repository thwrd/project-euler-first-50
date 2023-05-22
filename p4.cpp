#include <iostream>

using namespace std;

int reverse(int i)
{
    int r = 0;
    while (i > 0)
    {
        r = r * 10 + i % 10;
        i /= 10;
    }
    return r;
}

bool isPalindrome(int i)
{
    return i == reverse(i);
}

int main(void)
{
    int max = 0;
    for (int i = 999; i > 99; i--)
    {
        for (int j = i; j > 99; j--)
        {
            int c = j * i;
            if (c < max)
                continue;
            if (isPalindrome(c))
                max = c;
        }
    }
    cout << max << endl;
}
