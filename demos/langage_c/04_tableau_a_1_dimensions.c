/**
 * Code basique de tableau à 1 dimensions.
 */

#include <stdio.h>

//tableau[ligne]

int tableau[5] = {1, 2, 3, 4, 5};

int ligne;
int colonne;
int profondeur;

main(){
    printf("Tableau à 1 dimensions\n");
    
    //Parcours de ligne par ligne
    for(ligne=0; ligne<5; ligne++){
        printf("table[%d]=%d\n", ligne, tableau[ligne]);
    }
    //-
    return 0;
}
