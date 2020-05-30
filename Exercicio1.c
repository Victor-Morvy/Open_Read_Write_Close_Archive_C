#include <stdio.h>
#define TAMANHO 30

int main(int arg, char args[]){
	
	char placaVeiculo[7];
	float kilometragem;
	int i;
	FILE* arquivo;
	
	arquivo = fopen("carros.txt", "w");
	
	for(i=0; i<TAMANHO; i++){
		printf("Escreve a placa do veiculo: ");
		gets(placaVeiculo);
		
		printf("Escreva a Kilometragem do veiculo: ");
		scanf("%f", &kilometragem);
		
		getchar();
		
		printf("\n\n");
		
		fprintf(arquivo, "%s %f\n", placaVeiculo, kilometragem);
	}
	
	fclose(arquivo);
	
	system("pause");
	
	return 0;	
}
