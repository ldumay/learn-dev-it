/**
 * Code basique de tableau à 2 dimensions.
 */

#include <stdio.h>

int tableau[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

/*
 * Il est aussi possible d'initialisé de tableau de cette manière :
 * int tableau[3][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
 * Le langage C insérera lui même les valeurs dans chaque position disponibles du tableau.
 */

int ligne;
int colonne;

main(){
    printf("Tableau à 2 dimensions\n");
    
    //Parcours de ligne par ligne
    for(ligne=0; ligne<3; ligne++){
        //Parcours de colonne par colonne
        for(colonne=0; colonne<4; colonne++){
            printf("table[%d][%d]=%d\n", ligne, colonne, tableau[ligne][colonne]);
        }
        
    }
    //-
    return 0;
}
