int main() {
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1;
    
    printf("Antes incremento: %d\n", numero1);
    numero1++;
    printf("Pós incremento: %d\n", numero1++);
    
    printf("Antes decremento: %d\n", numero1);
    numero1--;
    printf("Pós decremento: %d\n", numero1--);
}