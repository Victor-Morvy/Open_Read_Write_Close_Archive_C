#include <stdio.h>

int main()
{
	char placa[7];
	float kilometragem;
	FILE* arquivo;
	
	arquivo = fopen("carros.txt", "r");
	
	do{
		fscanf(arquivo, "%s %f\n", placa, &kilometragem);
		printf("A kilometragem da placa %s e %f\n", placa, kilometragem);

	}while(!feof(arquivo));

	fclose(arquivo);
	
	printf("\n\n");
	system("pause");
	
}
