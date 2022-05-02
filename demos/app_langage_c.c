#include <stdio.h>
#include <stdlib.h>

int nb_points_de_vie = 0;

int potion_de_soin = 700;
int attack_eclaire = 500;
int attack_fatale_foudre = 1000;

int main(int argc, char *argv[])
{
    printf("Debut du programme\n");

    printf("--> Saisir les points de vie de depart : ");
    scanf("%d", &nb_points_de_vie);

    printf("-> points de vie : %d\n", nb_points_de_vie);

    nb_points_de_vie -= attack_eclaire;

    printf("-> Attack eclaire %dpts => PV=%d\n", attack_eclaire, nb_points_de_vie);

    nb_points_de_vie += potion_de_soin;

    printf("-> Soin %dpts => PV=%d\n", potion_de_soin, nb_points_de_vie);

    nb_points_de_vie -= attack_fatale_foudre;

    printf("-> Attack fatal foudre %dpts => PV=%d\n", attack_fatale_foudre, nb_points_de_vie);

    printf("-> points de vie restant : %d\n", nb_points_de_vie);

    printf("Fin du programme\n");

    return 0; //Stop le programme
}