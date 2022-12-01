#include <stdio.h>
#include "cabecalho.h"

// Mostrar menu de opções
int menu() {
	// Criar variável int resposta
	int resposta = 0;
	// Mostrar as opções pro usuário e pedir pra ele digitar o numero correspondente a oque ele quer
	printf("1 - Inserir\n2 - Pesquisar\n3 - Alterar\n4 - Deletar\n5 - Mostrar lista\n6 - Sair\n");
	scanf(" %d", &resposta);
	// Retornar a resposta do usuário
	return resposta;
}

// Inserir novo aluno (Create)
void inserir(Alunos* aluno) {
	// Mostrar mensagem perguntando uma informação do aluno
	printf("Digite o nome do aluno: ");
	// Armazenar informação do aluno em aluno[contG]
	scanf("%s", &aluno->nome);
	// Repetir para todas informações
	// Menos matricula que vai ser igual a contG
	printf("Digite o genero do aluno : ");
	scanf("%c", &aluno->genero);
	printf("Digite o CPF do aluno: ");
	scanf("%s", &aluno->cpf);
	printf("Digite a data de nascimento do aluno: ");
	scanf("%d/%d/%d", &aluno->diaNascimento, &aluno->mesNascimento, &aluno->anoNascimento);
	printf("Digite o número de telefone do aluno: ");
	scanf("%s", &aluno->telefone);
	printf("Digite o email do aluno: ");
	scanf("%s", &aluno->email);
	printf("Digite o curso do aluno: ");
	scanf("%s", &aluno->curso);
}

// Pesquisar por um aluno na lista (Read)
void pesquisar(Alunos* aluno, int matricula, int contagem) {
	int achou = 0;
	// Ir de aluno em aluno até achar o que tem a matricula igual a enviada
	for (int i = 0; i < contagem; i++) {
		// Mostrar todas as informações desse aluno
		if (aluno->matricula == matricula) {
			printf("Matricula do aluno: %d\nNome do aluno: %s\nCPF do aluno: %d\nData de nascimento do aluno: %d/%d/%d\nTelefone do aluno: %s\nEmail do aluno: %s\nCurso do aluno: %s\n", aluno[matricula].matricula, aluno[matricula].nome, aluno[matricula].cpf, aluno[matricula].diaNascimento, aluno[matricula].mesNascimento, aluno[matricula].anoNascimento, aluno[matricula].telefone, aluno[matricula].email, aluno[matricula].curso);
			achou = 1;
			return;
		}
	}

	if (!achou) {
		printf("Aluno não encontrado");
		return;
	}
}

// Alterar um dado de aluno (Update)
void alterar(Alunos* aluno, int matricula, int contagem) {
	int resposta = 0, achou = 0;
	// Ir de aluno em aluno até achar o que tem a matricula igual a enviada
	for (int i = 0; i < contagem; i++) {
		if (aluno->matricula == matricula) {
			// Perguntar qual informação o usuario quer alterar
			printf("Qual informação você quer alterar?\n1 - Nome\n2 - CPF\n3 - Data de Nascimento\n4 - Telefone\n5 - Email\n6 - Curso\n");
			scanf("%d", &resposta);
			break;
			achou = 1;
		}
	}

	if (!achou) {
		printf("Aluno não encontrado");
		return;
	}

	// Alterar a informação daquele usuário
	switch (resposta) {
		case 1:
			printf("Digite o novo nome: ");
			scanf(" %s", aluno->nome);
			break;
		case 2:
			printf("Digite o novo CPF: ");
			scanf(" %s", aluno->cpf);
		case 3:
			printf("Digite a nova data de nascimento: ");
			scanf("%d/%d/%d", aluno->diaNascimento, aluno->mesNascimento, aluno->anoNascimento);
		case 4:
			printf("Digite o novo telefone: ");
			scanf(" %s", aluno->telefone);
		case 5:
			printf("Digite o novo email: ");
			scanf(" %s", aluno->email);
		case 6:
			printf("Digite o novo curso: ");
			scanf(" %s", aluno->curso);
	}
}

// Deletar um aluno da lista (Delete)
void deletar(Alunos* aluno, int matricula, int* contagem) {
	int achou = 0;
	// Ir de aluno em aluno até achar o que tem a matricula igual a enviada
	for (int i = 0; i < contagem; i++) {
		if (aluno->matricula == matricula) {
			achou = 1;

			// Reinicializar todos os campos daquele aluno
			// aluno->nome;
			// aluno->cpf = "";
			// aluno->diaNascimento = 0;
			// aluno->mesNascimento = 0;
			// aluno->anoNascimento = 0;
			// aluno->telefone = "";
			// aluno->email = "";
			// aluno->curso = "";

			// Diminuir contagem por 1
			*contagem--;
		}
	}

	if (!achou) {
		printf("Aluno não encontrado");
	}
}

// Mostrar tabela de alunos (Função nova que Arnott pediu pra colocar)
void mostrarLista(Alunos* aluno, int contGeral) {
	// Ir de aluno em aluno mostrando todas as informações de todos enquanto for menor que a contagem geral
}

/*void copiar() {
	
}*/