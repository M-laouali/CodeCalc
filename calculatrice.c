#include <stdio.h>

void calculatrice() {
    float a, b;
    char op;

    printf("\n--- Calculatrice ---\n");
    printf("Entrez une opération (ex: 5 + 3) : ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+': printf("Résultat : %.2f\n", a + b); break;
        case '-': printf("Résultat : %.2f\n", a - b); break;
        case '*': printf("Résultat : %.2f\n", a * b); break;
        case '/':
            if (b != 0) printf("Résultat : %.2f\n", a / b);
            else printf("Erreur : division par zéro.\n");
            break;
        default: printf("Opérateur invalide.\n");
    }
}
