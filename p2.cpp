#include <iostream>

int main(void)
{
    int first = 1;
    int second = 1;
    int sum = 0;

    while (second < 4000000)
    {
        int next = first + second;
        if (next % 2 == 0)
            sum += next;
        first = second;
        second = next;
    }
    std::cout << sum << std::endl;
}
