#include <stdio.h>
#include "cabecalho.h"

// Mostrar menu de opções
void menu() {
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
	// Ir de aluno em aluno até achar o que tem a matricula igual a enviada
	for (int i = 0; i < contagem; i++) {
		// Mostrar todas as informações desse aluno
		if (aluno->matricula == matricula) {
			printf("Matricula do aluno: %d\nNome do aluno: %s\nCPF do aluno: %d\nData de nascimento do aluno: %d/%d/%d\nCurso do aluno: %s\n", aluno->matricula, aluno->nome, aluno->cpf, aluno->diaNascimento, aluno->mesNascimento, aluno->anoNascimento, aluno->curso);
			break;
		} else {
			printf("Aluno não encontrado");
		}
	}
}

// Alterar um dado de aluno (Update)
void alterar(Alunos* aluno, int matricula, int contagem) {
	// Ir de aluno em aluno até achar o que tem a matricula igual a enviada
	for (int i = 0; i < contagem; i++) {
		if (aluno->matricula == matricula) {
			
		}
	}
	// Perguntar qual informação o usuario quer alterar
	// Alterar a informação daquele usuário
}

// Deletar um aluno da lista (Delete)
void deletar(Alunos* aluno, int* contGeral) {
	// Ir de aluno em aluno até achar o que tem a matricula igual a enviada
	// Reinicializar todos os campos daquele aluno
	// Diminuir contagem por 1
}

// Mostrar tabela de alunos (Função nova que Arnott pediu pra colocar)
void mostrarLista(Alunos* aluno, int* contGeral) {
	// Ir de aluno em aluno mostrando todas as informações de todos enquanto for menor que a contagem geral
}

/*void copiar() {
	
}*/