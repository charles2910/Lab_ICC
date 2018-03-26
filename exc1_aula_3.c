#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float p1, p2, media;

    printf ("Nota 1: ");
    scanf ("%f", &p1);

    printf ("Nota 2: ");
    scanf ("%f", &p2);

    if (p1 > 10.0 || p1 < 0.0)
    {
        printf ("nota invalida");
        return 0;
    }

    if (p2 > 10.0 || p2 < 0.0)
    {
        printf ("nota invalida");
        return 0;
    }
    media = (p1 + p2)/2.0;
    printf ("A media eh: %.2f\n", media);
    return 0;
}
