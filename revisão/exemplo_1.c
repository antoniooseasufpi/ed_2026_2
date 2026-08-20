// exemplo simples utilizando argc e argv
#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("Número de argumentos: %d\n", argc);
	for (int i = 0; i < argc; i++) {
		printf("Argumento %d: %s\n", i, argv[i]);
	}
	return 0;
}