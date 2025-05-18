#include <stdio.h>

void suiteFibonacci() {
    int n, i;
    int a = 0;

    printf("\n--- Suite simple (nombres pairs) ---\n");
    printf("Entrez le nombre de termes à générer : ");
    scanf("%d", &n);

    printf("Suite : ");
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        a += 2;
    }
    printf("\n");
}
