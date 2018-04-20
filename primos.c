#include <stdio.h>
#include <stdlib.h>

int checa_primo (int num)
{
    int divisor = 2;
    while (divisor < num)
    {
        if (num % divisor == 0)
            return -1;
        divisor++;
    }
    return 0;
}

int main()
{
    int num = 14;
    printf("%d\n", checa_primo(num) );
    return 0;
}
