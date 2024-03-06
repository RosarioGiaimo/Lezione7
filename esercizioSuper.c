#include <stdio.h>
#include <math.h>
/*
 * Questo e' un commento
 */

int unElemento()
{
    double a;
    printf("\nInserisci il numero: ");
    scanf("%lf", &a);
    printf("\nIl numero inserito è: %.2f\n", a);
    return 0;
}

int dueElementi()
{
    double a, b;
    int scelta;
    printf("\nInserisci il primo: ");
    scanf("%lf", &a);
    printf("Inserisci il secondo: ");
    scanf("%lf", &b);
    printf("\n1. Somma\n2. Moltiplicazione\n3. Divisione\n4. Resto\n5. Potenza\n\nScegli: ");
    scanf("%d", &scelta);
    switch (scelta)
    {
    case 1:
        printf("\nIl risultato è: %.lf\n", a + b);
        break;
    case 2:
        printf("\nIl risultato è: %.lf\n", a * b);
        break;
    case 3:
        if (b != 0)
            printf("\nIl risultato è: %.lf\n", a / b);
        break;
    case 4:
        if (b != 0)
            printf("\nIl risultato è: %.lf\n", fmod(a, b));
        break;
    case 5:
        printf("\nIl risultato è: %.lf\n", pow(a, b));
        break;
    default:
        printf("Ho detto da 1 a 3!\n");
        break;
    }
    return 0;
}

int treElementi()
{
    double a, b, c;
    int scelta;
    printf("\nInserisci il primo: ");
    scanf("%lf", &a);
    printf("Inserisci il secondo: ");
    scanf("%lf", &b);
    printf("Inserisci il terzo: ");
    scanf("%lf", &c);
    printf("\n1. Somma\n2. Moltiplicazione\n3. Divisione\n4. Resto\n5. Potenza\n\nScegli: ");
    scanf("%d", &scelta);
    switch (scelta)
    {
    case 1:
        printf("\nIl risultato è: %.2f\n", a + b + c);
        break;
    case 2:
        printf("\nIl risultato è: %.2f\n", a * b * c);
        break;
    case 3:
        if (b != 0 && c != 0)
            printf("\nIl risultato è: %.2f\n", a / b / c);
        break;
    case 4:
        if (b != 0 && c != 0)
            printf("\nIl risultato è: %.2f\n", fmod(a, b) + fmod(a, c));
        break;
    case 5:
        printf("\nIl risultato è: %.2f\n", pow(a, pow(b, c)));
        break;
    default:
        printf("Ho detto da 1 a 3!\n");
        break;
    }
    return 0;
}

int main()
{
    int input;
    printf("Su quanti numeri vuoi operare da 1 a 3? ");
    scanf("%d", &input);
    printf("****************************************\n");

    switch (input)
    {
    case 1:
        unElemento();
        break;
    case 2:
        dueElementi();
        break;
    case 3:
        treElementi();
        break;
    default:
        printf("Inserisci un numero compreso tra 1 e 3.\n");
        break;
    }
    return 0;
}