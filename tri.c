#include <stdio.h>

void trierTableau() {
    int n, i, j, temp;

    printf("\n--- Tri d'un tableau ---\n");
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    for (i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    printf("Tableau trié : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}
