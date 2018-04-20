#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nmax;             //maior valor da sequencia
   int i,j;              //contadores
   int eh_primo;         //eh primo? 0 == nao; 1 == sim

   printf("\nDigite o tamanho da sequencia: ");
   scanf("%d", &nmax);

   for (i=2; i<=nmax; i++)
   {

       eh_primo = 1;     // antes de iniciar a testar cada numero,
                         // sempre diz que o numero pode ser primo

       for (j=2; j<i; j++)   // Conta de 2 até N-1
       {
           if (i % j == 0)
           {
                 eh_primo = 0; // se tem resto 0, é pq nao eh primo
           }
       } // fim do for de teste de cada numero da sequencia

       if (eh_primo == 0) printf("\n %d nao eh primo",i);
       if (eh_primo != 0) printf("\n %d ==> eh primo",i);

   } // fim do for principal (teste de toda a sequencia)

   printf("\n");
   return 0;
}
