#include <stdio.h>
#include "calculatrice.h"
#include "nombres_premiers.h"
#include "suite.h"
#include "tri.h"
#include "recherche.h"

int main() {
    int choix;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Calculatrice\n");
        printf("2. Vérifier un nombre premier\n");
        printf("3. Générer une suite\n");
        printf("4. Trier un tableau\n");
        printf("5. Rechercher un élément\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch(choix) {
            case 1: calculatrice(); break;
            case 2: verifierPremier(); break;
            case 3: suiteFibonacci(); break;
            case 4: trierTableau(); break;
            case 5: rechercherElement(); break;
            case 0: printf("Au revoir !\n"); break;
            default: printf("Choix invalide.\n");
        }
    } while (choix != 0);

    return 0;
}
