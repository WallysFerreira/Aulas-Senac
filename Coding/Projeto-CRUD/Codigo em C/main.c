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
				inserir(&aluno[contG]);
				break;
			case 2:
				int matricula = -1;
				while (matricula < 0) {
					printf("Qual é a matrícula do aluno que você quer achar?\n");
					scanf(" %d", &matricula);

					if (matricula < 0 || matricula > contG) {
						printf("A matrícula deve ser maior que 0 e menor que %d", contG);
					}
				}
				pesquisar(aluno, matricula, contG);
				break;
			case 3:
				int matricula = -1;
				while (matricula < 0) {
					printf("Qual é a matrícula do aluno que você quer achar?\n");
					scanf(" %d", &matricula);

					if (matricula < 0 || matricula > contG) {
						printf("A matrícula deve ser maior que 0 e menor que %d", contG);
					}
				}
				alterar(aluno, matricula, contG);
				break;
			case 4:
				int matricula = -1;
				while (matricula < 0) {
					printf("Qual é a matrícula do aluno que você quer achar?\n");
					scanf(" %d", &matricula);

					if (matricula < 0 || matricula > contG) {
						printf("A matrícula deve ser maior que 0 e menor que %d", contG);
					}
				}
				deletar(aluno, matricula, contG);
				break;
			case 5:
				mostrarLista(aluno, contG);
				break;
			case 6:
				break;
			default:
				printf("Opção inválida");
		}
	}

	printf("Tchau");
}