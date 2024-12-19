#include <stdio.h>

void dessiner_rectangle(int largeur, int hauteur) {
    // Dessiner la première ligne
    printf("+");
    for (int i = 0; i < largeur; i++) {
        printf("-");
    }
    printf("+\n");

    // Dessiner les lignes intermédiaires
    for (int j = 0; j < hauteur; j++) {
        printf("|");
        for (int i = 0; i < largeur; i++) {
            printf(" ");
        }
        printf("|\n");
    }

    // Dessiner la dernière ligne
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

