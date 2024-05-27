#include "flechi.h"
#include "cell.h"
#include <stdio.h>
//Fonctions


void remp_fléchi_list_from_p_inter_verb(p_inter_verb p,char forme_fléchie )
{
    p_inter_verb temp=p; // On récupère l'adresse de la struct inter_verb
    if(temp.ad_inter_verb->verblist.head == NULL) // Si la liste fléchie (verblist) est vide
        temp.ad_inter_verb->verblist.head= createcell(forme_fléchie); // On crée un maillon avec la valeur du char
    else
        while(temp.ad_inter_verb->verblist.head->next != NULL)// Tant que le maillon suivant existe on parcourt la liste
        {
            temp.ad_inter_verb->verblist.head=temp.ad_inter_verb->verblist.head->next; // On passe au maillon suivant
        }
    temp.ad_inter_verb->verblist.head->next=createcell(forme_fléchie); // On crée un new maillon avec la valeur du char

}



void remp_fléchi_list_from_p_inter_adj(p_inter_adj p,char forme_fléchie )
{

    p_inter_adj temp=p; // On récupère l'adresse de la struct inter_adj
    if(temp.ad_inter_adj->adjectiflist.head == NULL) // Si la liste fléchie (adjectiflist) est vide
        temp.ad_inter_adj->adjectiflist.head= createcell(forme_fléchie); // On crée un maillon avec la valeur du char
    else
        while(temp.ad_inter_adj->adjectiflist.head->next != NULL)// Tant que le maillon suivant existe on parcourt la liste
        {
            temp.ad_inter_adj->adjectiflist.head=temp.ad_inter_adj->adjectiflist.head->next; // On passe au maillon suivant
        }
    temp.ad_inter_adj->adjectiflist.head->next=createcell(forme_fléchie);//On crée un new maillon avec la valeur du char

}

void remp_fléchi_list_from_p_inter_nom(p_inter_nom p,char forme_fléchie )
{
    p_inter_nom temp=p; // On récupère l'adresse de la struct inter_nom
    if(temp.ad_inter_nom->nomlist.head == NULL) // Si la liste fléchie (nomlist) est vide
        temp.ad_inter_nom->nomlist.head= createcell(forme_fléchie); //On crée un maillon avec la valeur du char
    else
        while(temp.ad_inter_nom->nomlist.head->next != NULL)// Tant que le maillon suivant existe on parcourt la liste
        {
            temp.ad_inter_nom->nomlist.head=temp.ad_inter_nom->nomlist.head->next; // On passe au maillon suivant
        }
    temp.ad_inter_nom->nomlist.head->next=createcell(forme_fléchie);//On crée un new maillon avec la valeur du char

}




void display_fléchi_list_verb(p_inter_verb p)
{
    p_cell  temp =p.ad_inter_verb->verblist.head; // On récupère l'adresse du premier maillon
    while (temp != NULL)
    {
        printf("%c – ", temp->value); // Affichage d'une forme fléchie
        temp = temp->next; // On passe au maillon suivant
    }

}



void display_fléchi_list_adj(p_inter_adj p)
{

    p_cell  temp =p.ad_inter_adj->adjectiflist.head; // On récupère l'adresse du premier maillon
    while (temp != NULL)
    {
        printf("%c – ", temp->value); // Affichage d'une forme fléchie
        temp = temp->next; // On passe au maillon suivant
    }

}

void display_fléchi_list_nom(p_inter_nom p)
{

    p_cell  temp =p.ad_inter_nom->nomlist.head; // On récupère l'adresse du premier maillon
    while (temp != NULL)
    {
        //afficher sa valeur
        printf("%c – ", temp->value); // Affichage d'une forme fléchie
        temp = temp->next; // On passe au maillon suivant
    }


}
