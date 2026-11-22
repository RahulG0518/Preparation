
#include <stdbool.h>

bool isPalindrome(int x)
{
    int original = x;
    long long reverse = 0;

    if(x < 0)
        return false;

    while(x != 0)
    {
        int remainder = x % 10;

        reverse = reverse * 10 + remainder;

        x = x / 10;
    }

    if(original == reverse)
        return true;
    else
        return false;
}
