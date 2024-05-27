#include "intermediaire.h"
#include <stdio.h>


//Fonctions


p_inter_verb create_inter_verb ()
{
    inter_verb new_inter_verb;  // On crée une nouvelle structure inter_verb
    new_inter_verb.nbflechi=0; // On initialise le nombre de formes fléchies à 0
    new_inter_verb.verblist=create_empty_liste(); // On va créer une liste de formes fléchies vide
    p_inter_verb p_new_i_v;// On va créer le pointeur sur cette nouvelle structure
    p_new_i_v.ad_inter_verb= &new_inter_verb; // On récupère l'adresse de la nouvelle structure 
    return p_new_i_v;

}


p_inter_adj create_inter_adj () 
{
    inter_adj new_inter_adj; // On crée une nouvelle structure inter_adj
    new_inter_adj.nbflechi=0; // On initialise le nombre de formes fléchies à 0
    new_inter_adj.adjectiflist=create_empty_liste(); // On va créer une liste de formes fléchies vide
    p_inter_adj p_new_i_adj; //On va créer le pointeur sur cette nouvelle structure
    p_new_i_adj.ad_inter_adj= &new_inter_adj; // On récupère l'adresse de la nouvelle structure 
    return p_new_i_adj;
}


p_inter_nom create_inter_nom () 
{
    inter_nom new_inter_nom; // On crée une nouvelle structure inter_nom
    new_inter_nom.nbflechi=0; // On initialise le nombre de formes fléchies à 0
    new_inter_nom.nomlist=create_empty_liste(); // On va créer une liste de formes fléchies vide
    p_inter_nom p_new_i_nom; // On va créer le pointeur sur cette nouvelle structure
    p_new_i_nom.ad_inter_nom= &new_inter_nom; // On récupère l'adresse de la nouvelle structure 
    return p_new_i_nom;

}


void display_inter_verb(p_inter_verb p)
{
    printf("nb fléchie : %d\n",p.ad_inter_verb->nbflechi); // Affichage du nombre de formes fléchies
    printf("head:%X \n",p.ad_inter_verb->verblist.head); // Affichage de l'adresse du premier maillon de la liste des fléchies

}

void display_inter_adj(p_inter_adj p)
{
    printf("nb fléchie : %d\n",p.ad_inter_adj->nbflechi); // Affichage du nombre de formes fléchies
    printf("head:%X \n",p.ad_inter_adj->adjectiflist.head); // Affichage de l'adresse du premier maillon de la liste des fléchies

}

void display_inter_nom(p_inter_nom p)
{
    printf("nb fléchie : %d\n",p.ad_inter_nom->nbflechi); // Affichage du nombre de formes fléchies
    printf("head:%X \n",p.ad_inter_nom->nomlist.head); // Affichage de l'adresse du premier maillon de la liste des fléchies

}



