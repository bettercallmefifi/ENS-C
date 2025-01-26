#include <stdio.h>

void dessiner_rectangle(int largeur, int hauteur) {
    printf("+");
    for (int i = 0; i < largeur; i++) {
        printf("-");
    }
    printf("+\n");

    for (int j = 0; j < hauteur; j++) {
        printf("|");
        for (int i = 0; i < largeur; i++) {
            printf(" ");
        }
        printf("|\n");
    }
    printf("+");
    for (int i = 0; i < largeur; i++) {
        printf("-");
    }
    printf("+\n");
}

int main() {
    int largeur, hauteur;
    printf("Entrez la largeur et la hauteur : ");
    scanf("%d %d", &largeur, &hauteur);
    dessiner_rectangle(largeur, hauteur);
    return 0;
}

