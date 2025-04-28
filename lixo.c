#include <stdio.h>

int main(){
int idade, matricula;
float altura;
char nome[50];

printf("Digite sua idade: \n");
scanf("%d", &idade);

printf("Digite sua altura \n");
scanf("%s", &altura);

printf("Digite sua nome \n");
scanf("%s", &nome);

printf("Digite sua matricula \n");
scanf("%d", &matricula);

printf("nome do aluno: %s - Matricula: %d", nome, matricula);
printf("Idade %d - Altura %f", idade, altura);
return 0;
}