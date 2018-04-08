#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char msg[15], chave[15];
    int  a = 0;

    printf ("Digite a mensagem a ser encriptada\n");
    gets (msg);
    printf ("Digite a chave de criptografia\n");
    gets(chave);

    while(msg[a] != NULL)
    {
        msg[a] = msg[a] + chave[a];
        a++;
    }

    printf("%s\n",msg );

    //descriptografando
    a = 0;
    while(msg[a] != NULL)
    {
        msg[a] = msg[a] - chave[a];
        a++;
    }

    printf("%s\n", msg);
    return 0;
}
