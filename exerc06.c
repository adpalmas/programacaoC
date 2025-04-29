#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
 
int main() {
    int a = 10; // Declaração de variável inteira
    int b = 3; // Declaração de variável inteira
    int soma = a + b; // Soma de dois inteiros
    int diferenca = a - b; // Diferença de dois inteiros
    int produto = a * b; // Produto de dois inteiros
    int quociente = a / b; // Note que a divisão de inteiros resulta em um número inteiro
 
    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);
 
    return 0;
}