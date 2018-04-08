#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float alunos[3][3];	

	for (int aluno = 1; aluno <= 3; aluno++)
	{
		printf("Digite as notas do aluno %d\n", aluno);
		for (int notas = 1; notas <= 3; notas++)
		{
			printf("Digite as nota %d:", notas);
			scanf ("%f", &alunos[aluno - 1][notas - 1]);
		}
	}

    return 0;
}
