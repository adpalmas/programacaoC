#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    float nota1, nota2, nota3;
    float media;

    printf("***Programa de calculo de média ***\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média
    media = (nota1 + nota2 + nota3) / 3;

    // Exibe a média
    printf("A média é: %f\n", media);

    return 0; // Indica que o programa terminou com sucesso
}