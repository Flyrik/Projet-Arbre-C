// Prototypes et structures

#include <stdlib.h>
#include "liste.h"
#ifndef PROJETC_PROJET_H
#define PROJETC_PROJET_H



typedef struct // Structure intermédiaire pour les verbes
{
    int nbflechi ;
    t_std_list verblist;

}inter_verb;


typedef struct // Structure intermédiaire pour les adjectifs
{
    int nbflechi;
    t_std_list adjectiflist;

}inter_adj;

typedef struct // Structure intermédiaire pour les noms
{
    int nbflechi;
    t_std_list nomlist;

}inter_nom;


typedef struct  // une structure qui définit un pointeur sur un inter_verb
{
    inter_verb* ad_inter_verb; // On va récupérer l'adresse de la structure inter_verb
}p_inter_verb;


typedef struct  // une structure qui définit un pointeur sur un inter_adj
{
    inter_adj* ad_inter_adj; // On va récupérer l'adresse de la structure inter_adj
}p_inter_adj;


typedef struct   // une structure qui définit un pointeur sur un inter_nom
{
    inter_nom* ad_inter_nom; // On va récupérer l'adresse de la structure inter_nom
}p_inter_nom;


p_inter_adj create_inter_adj (); // Fonction qui crée un inter_adj et retourne son adresse

p_inter_verb create_inter_verb(); // Fonction qui crée un inter_verb et retourne son adresse

p_inter_nom create_inter_nom (); // Fonction qui crée un inter_nom et retourne son adresse

void display_inter_verb(p_inter_verb p); // Fonction qui affiche une structure intermédiaire verbe

void display_inter_adj(p_inter_adj p); // Fonction qui affiche une structure intermédiaire adjectif

void display_inter_nom(p_inter_nom p); // Fonction qui affiche une structure intermédiaire nom



#endif //PROJETC_PROJET_H
