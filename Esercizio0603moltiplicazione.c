

#include <stdio.h>

int main() {
    float num1, num2, risultato;

    // Inserimento dei due numeri
    printf("Inserisci il primo numero: ");
    scanf("%f", &num1);
    
    printf("Inserisci il secondo numero: ");
    scanf("%f", &num2);

    // Moltiplicazione
    risultato = num1 * num2;

    // Stampa del risultato sul terminale
    printf("Il risultato della moltiplicazione è: %.f\n", risultato);

    return 0;
}