#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fNumber, sNumber, result;
    char sign, yesno = 'y';
    while (yesno != 110)
    {
        scanf("%d", &fNumber);
        scanf("%s", &sign);
        scanf("%d", &sNumber);
        if (sign == '+')
        {
            result = fNumber + sNumber;
        }
        else if (sign == '-')
        {
            result = fNumber - sNumber;
        }
        else if (sign == '*')
        {
            result = fNumber * sNumber;
        }
        else if (sign == '/')
        {
            result = fNumber / sNumber;
        }
        printf("%d %c %d = %d", fNumber, sign, sNumber, result);
        printf("\nContinue (y/n)? ");
        scanf("%s", &yesno);
    }
    return 0;
}
