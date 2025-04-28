#include <stdio.h>

int main() {
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma;
    int subtracao;
    int multiplicacao;
    int divisao;
    // Solicita ao usuário que insira dois números inteiros
    printf("Calculadora Simples\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2; //operador de soma
    subtracao = numero1 - numero2;//operador de subtração
    multiplicacao = numero1 * numero2;//operador de multiplicação
    divisao = numero1 / numero2;//operador de divisão
    
    // Exibição dos resultados
    printf("a soma é: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);
  

    return 0;
}