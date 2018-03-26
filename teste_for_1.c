#include <stdio.h>
#include <stdlib.h>

int main ()
{
    for (int i = 0; i < 2; i++)
    {
        printf("%ls\n", &i);
        for (int i = 0; i < 2; i++)
            printf("%ls\n", &i);
    }
    return 0;
}
