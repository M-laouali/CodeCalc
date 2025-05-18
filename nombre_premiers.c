#include <stdio.h>

void verifierPremier() {
    int n, i, estPremier = 1;

    printf("\n--- Vérifier un nombre premier ---\n");
    printf("Entrez un entier : ");
    scanf("%d", &n);

    if (n <= 1) {
        estPremier = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                estPremier = 0;
                break;
            }
        }
    }

    if (estPremier)
        printf("%d est un nombre premier.\n", n);
    else
        printf("%d n'est pas un nombre premier.\n", n);
}
