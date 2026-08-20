// algumas questoes utilizando ponteiros e vetores

#include <stdlib.h>
#include <stdio.h>

void computar_notas(float *notas, int t_vet, float *media, float *maior, float *menor, float *soma)
{
	for (int i = 0; i < t_vet; ++i)
	{
		*soma += notas[i];
		if (notas[i] > *maior)
			*maior = notas[i];
		if (notas[i] < *menor)
			*menor = notas[i];
	}
	*media = *soma / t_vet;
}

int main(int argc, char const *argv[])
{
	float notas[4], media = 0, maior, menor, soma = 0;
	int t_vet;

	t_vet = argc - 1;

	if (t_vet != 4)
	{
		printf("Erro: quantidade de notas invalida. Informe 4 notas.\n");
		return 1;
	}

	for (int i = 0; i < t_vet; ++i)
		notas[i] = atof(argv[i + 1]);

	maior = menor = *notas;

	computar_notas(notas, t_vet, &media, &maior, &menor, &soma);

	printf("Media: %.2f\n", media);
	printf("Maior: %.2f\n", maior);
	printf("Menor: %.2f\n", menor);
	printf("Soma: %.2f\n", soma);
	
	return 0;
}

