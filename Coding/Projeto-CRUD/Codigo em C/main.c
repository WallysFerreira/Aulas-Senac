#include "funcoes.h"
#define MAX 10

// gostei do nome do replit
int main(void) {
  Alunos aluno[MAX];
  int resposta = 0, contG = 0;
	
	while (resposta != 6) {
		resposta = menu();

		switch (resposta) {
			case 1: 
				inserir();
				break;
			case 2:
				pesquisar();
				break;
			case 3:
				alterar();
				break;
			case 4:
				deletar();
				break;
			case 5:
				mostrarLista();
				break;
			case 6:
				break;
			default:
				printf("Opção inválida");
		}
	}

	printf("Tchau");
}