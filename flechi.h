#include "intermédiaire.h"
#ifndef PROJETC_FLÉCHI_H
#define PROJETC_FLÉCHI_H

// Prototypes et structures


typedef struct
{
    char value;
    struct s_cell *next;
}s_cell;
typedef struct s_cell t_cell, *p_cell;




void remp_fléchi_list_from_p_inter_verb(p_inter_verb p,char forme_fléchie ); // Remplissage d'une liste de formes fléchies à partir de l'adresse d'un inter_verb
void remp_fléchi_list_from_p_inter_adj(p_inter_adj p,char forme_fléchie ); // Remplissage d'une liste de formes fléchies à partir de l'adresse d'un inter_adj
void remp_fléchi_list_from_p_inter_nom(p_inter_nom p,char forme_fléchie ); // Remplissage d'une liste de formes fléchies à partir de l'adresse d'un inter_nom

void display_fléchi_list_verb(p_inter_verb ); // Affichage d'une liste de formes fléchies de verbe
void display_fléchi_list_adj(p_inter_adj ); // Affichage d'une liste de formes fléchies d'adjectif
void display_fléchi_list_nom(p_inter_nom ); // Affichage d'une liste de formes fléchies de nom

#endif //PROJETC_FLÉCHI_H
