/**
 * Code basique de tableau à 3 dimensions.
 */

#include <stdio.h>

//tableau[ligne][colonne][nb_variables_contenues]

int tableau[2][2][2] = {
    { {1, 2} , {3, 4} },
    { {5, 6} , {7, 8} }
};
/*
 * Il est aussi possible d'initialisé de tableau de cette manière :
 * int tableau[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8};
 * Le langage C insérera lui même les valeurs dans chaque position disponibles du tableau.
 */

int ligne;
int colonne;
int profondeur;

main(){
    printf("Tableau à 3 dimensions\n");
    
    //Parcours de ligne par ligne
    for(ligne=0; ligne<2; ligne++){
        //Parcours de colonne par colonne
        for(colonne=0; colonne<2; colonne++){
            //Parcours de chaque profondeur
            for(profondeur=0; profondeur<2; profondeur++){
                printf("table[%d][%d][%d]=%d\n", ligne, colonne, profondeur, tableau[ligne][colonne][profondeur]);
            }
        }
        
    }
    //-
    return 0;
}
