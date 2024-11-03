// 1-Faire une structure pour gérer la pile et la sortie
// 2- definir les règles de priorité
// 3- les fonctions du parser nombre et variables - les opérateurs - les parenthèses

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "lexer.h"
#include "parser.h"




// Initialisation de la pile
void initialize(PILE *pile) {
    pile->TOP = -1; // Le TOP est à -1 signifie que la pile est vide
    // si on ajoute un elmt on incrémente top et devient
}

int isEmpty(PILE *pile) {
    return pile->TOP ==-1;
}

// Vérification si la pile est pleine pour ne pas dépasser sa capacité max
 int isFull(PILE *pile) {
    return pile->TOP == MAX - 1; // si le sommet est à MAX-1 la pile est pleine
    // MAX - 1 : pour nous assurer que nous restons dans les limites de notre tableau , exple: si MAX est 10 les indices vont de 0 a 9

}

// Fonction pour ajouter un elmt dans la pile
void push(PILE *pile, int value) {
    if (isFull(pile)) {
        // Vérifier si la pile est pleine
        printf("Erreur: pile is full\n");
    }else {
        pile->TOP++; // On incrémente le sommet pour ajouter un nouvel elmt
        pile->pile[pile->TOP] = value; // placer la valeur à l'indice du sommet
        printf("Ajouté : %d\n" , value);
    }
}

//Fonction pour retirer un elmt de la pile
int pop(PILE *pile) {
    if (isEmpty(pile)) {
        // On vérifie si la pile est vide
        printf ("Erreur: pile is empty\n");
        return -1; // Valeur d'erreur
    }else {
        int value = pile -> pile[pile->TOP]; //
        pile->TOP--; // on décrémente le sommet
        printf("Retiré : %d\n" , value);
        return value; // Retourner la valeur retirée
    }
}

// Fonction pour obtenir un elmt sans le retirer

int peek(PILE *pile) {
    if (isEmpty(pile)) {
        printf ("Erreur: pile is empty\n");
        return -1;
    } else {
        return pile -> pile[pile->TOP]; // retourner la valeur au sommet sans la retirer
    }
}

