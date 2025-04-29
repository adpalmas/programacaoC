#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    float nota1, nota2, nota3, nota4;
    float soma;

    printf("***Programa de calculo de média ***\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Calcula a média
    soma = (float)(nota1 + nota2 + nota3 + nota4);

    // Exibe a média
    printf("A média é: %.2f\n", soma);

    return 0; // Indica que o programa terminou com sucesso
}