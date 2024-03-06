


#include <stdio.h>

int main() {
    int num1, num2;
    float media;

    // Inserimento dei due numeri
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    // Calcolo della media aritmetica
    media = (float)(num1 + num2) / 2;

    // Stampa della media sul terminale
    printf("La media aritmetica dei due numeri è: %.2f\n", media);

    return 0;
}