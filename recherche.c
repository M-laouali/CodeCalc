#include <stdio.h>

void rechercherElement() {
    int n, i, valeur, trouve = 0;

    printf("\n--- Recherche dans un tableau ---\n");
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    for (i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Entrez l’élément à rechercher : ");
    scanf("%d", &valeur);

    for (i = 0; i < n; i++) {
        if (tableau[i] == valeur) {
            printf("Élément trouvé à la position %d.\n", i);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Élément non trouvé.\n");
    }
}
