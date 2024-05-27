#include "liste.h"
#include "fonction.h"
#include <stddef.h>
#include <stdlib.h>
#define MAX 512
#include <stdio.h>
#include "arbre.h"
#include "node.h"
#include <time.h>

t_std_list createliste(){
    t_std_list list;
    list.head = NULL;
    int i;
    p_cell temp;
    temp = list.head;
    while ( i<=17){
        p_cell p;
        temp->next = createcell("");
        temp = temp->next;
        i++;
    }


}

char tabvflech[MAX];
int nbslavflech = 0;
int jvflech = 0;
int nvflech = 0;

char tabvbase[MAX];
int nbslavbase = 0;
int jvbase = 0;
int nvbase = 0;

char tabvinfo[MAX];
int nbslavinfo = 0;
int jvinfo = 0;
int nvinfo = 0;

/*toutes les variables pour classer les (base, flechis, info) des Noms*/

char tabNflech[MAX];
int nbslaNflech = 0;
int jNflech = 0;
int nNflech = 0;

char tabNbase[MAX];
int nbslaNbase = 0;
int jNbase = 0;
int nNbase = 0;

char tabNinfo[MAX];
int nbslaNinfo = 0;
int jNinfo = 0;
int nNinfo = 0;


/*toutes les variables pour classer les (base, flechis, info) des Adjectifs*/

char tabAflech[MAX];
int nbslaAflech = 0;
int jAflech = 0;
int nAflech = 0;

char tabAbase[MAX];
int nbslaAbase = 0;
int jAbase = 0;
int nAbase = 0;

char tabAinfo[MAX];
int nbslaAinfo = 0;
int jAinfo = 0;
int nAinfo = 0;


/*toutes les variables pour classer les (base, flechis, info) des Adverbes*/

char tabAdflech[MAX];
int nbslaAdflech = 0;
int jAdflech = 0;
int nAdflech = 0;

char tabAdbase[MAX];
int nbslaAdbase = 0;
int jAdbase = 0;
int nAdbase = 0;

char tabAdinfo[MAX];
int nbslaAdinfo = 0;
int jAdinfo = 0;
int nAdinfo = 0;

void classerfonction(char tab1[],char tab2[],char tab3[]) {
    int i, k = 0;


    /*toutes les variables pour classer les (base, flechis, info) des verbes*/




    int nbsla3 = 0;


    while (tab3[i] != NULL) {


        if (tab3[i] == '/') {
            nbsla3++;


        }
        /* si l'info indique que cette ligne contient un Verbe*/
        if (tab3[i] == 'V') {
            /* Pour prendre toutes les formes fléchis des verbes et les mettres dans un tableau*/
            while (nbslavflech < nbsla3) {
                if (tab1[nvflech] == '/') {
                    nbslavflech++;

                }
                nvflech++;

            }
            while (tab1[nvflech] != '/') {
                tabvflech[jvflech] = tab1[nvflech];
                nvflech++;
                jvflech++;

            }
            tabvflech[jvflech] = '/';
            jvflech++;

/* Pour prendre toutes les formes de base des verbes et les mettres dans un tableau*/
            while (nbslavbase < nbsla3) {
                if (tab2[nvbase] == '/') {
                    nbslavbase++;

                }
                nvbase++;

            }
            while (tab2[nvbase] != '/') {
                tabvbase[jvbase] = tab2[nvbase];
                nvbase++;
                jvbase++;

            }
            tabvbase[jvbase] = '/';
            jvbase++;

/* Pour prendre toutes les infos des verbes et les mettres dans un tableau*/

            while (nbslavinfo < nbsla3) {
                if (tab3[nvinfo] == '/') {
                    nbslavinfo++;

                }
                nvinfo++;

            }
            while (tab3[nvinfo] != '/') {
                tabvinfo[jvinfo] = tab3[nvinfo];
                nvinfo++;
                jvinfo++;

            }
            tabvinfo[jvinfo] = '/';
            jvinfo++;


        }
            /* si l'info indique que cette ligne contient un Nom*/
        else if (tab3[i] == 'N') {


            /* Pour prendre toutes les formes fléchis des Noms et les mettres dans un tableau*/
            while (nbslaNflech < nbsla3) {
                if (tab1[nNflech] == '/') {
                    nbslaNflech++;

                }
                nNflech++;

            }
            while (tab1[nNflech] != '/') {
                tabNflech[jNflech] = tab1[nNflech];
                nNflech++;
                jNflech++;

            }
            tabNflech[jNflech] = '/';
            jNflech++;

/* Pour prendre toutes les formes de base des Noms et les mettres dans un tableau*/
            while (nbslaNbase < nbsla3) {
                if (tab2[nNbase] == '/') {
                    nbslaNbase++;

                }
                nNbase++;

            }
            while (tab2[nNbase] != '/') {
                tabNbase[jNbase] = tab2[nNbase];
                nNbase++;
                jNbase++;

            }
            tabNbase[jNbase] = '/';
            jNbase++;

/* Pour prendre toutes les infos des Noms et les mettres dans un tableau*/

            while (nbslaNinfo < nbsla3) {
                if (tab3[nNinfo] == '/') {
                    nbslaNinfo++;

                }
                nNinfo++;

            }
            while (tab3[nNinfo] != '/') {
                tabNinfo[jNinfo] = tab3[nNinfo];
                nNinfo++;
                jNinfo++;

            }
            tabNinfo[jNinfo] = '/';
            jNinfo++;


        }



            /* si l'info indique que cette ligne contient un Adjectif*/
        else if ((tab3[i] == 'A') && (tab3[i + 1] == 'd') && (tab3[i + 2] == 'j')) {

            /* Pour prendre toutes les formes fléchis des Adjectifs et les mettres dans un tableau*/
            while (nbslaAflech < nbsla3) {
                if (tab1[nAflech] == '/') {
                    nbslaAflech++;

                }
                nAflech++;

            }
            while (tab1[nAflech] != '/') {
                tabAflech[jAflech] = tab1[nAflech];
                nAflech++;
                jAflech++;

            }
            tabAflech[jAflech] = '/';
            jAflech++;

/* Pour prendre toutes les formes de base des Adjectifs et les mettres dans un tableau*/
            while (nbslaAbase < nbsla3) {
                if (tab2[nAbase] == '/') {
                    nbslaAbase++;

                }
                nAbase++;

            }
            while (tab2[nAbase] != '/') {
                tabAbase[jAbase] = tab2[nAbase];
                nAbase++;
                jAbase++;

            }
            tabAbase[jAbase] = '/';
            jAbase++;

/* Pour prendre toutes les infos des Adjectifs et les mettres dans un tableau*/

            while (nbslaAinfo < nbsla3) {
                if (tab3[nAinfo] == '/') {
                    nbslaAinfo++;

                }
                nAinfo++;

            }
            while (tab3[nAinfo] != '/') {
                tabAinfo[jAinfo] = tab3[nAinfo];
                nAinfo++;
                jAinfo++;

            }
            tabAinfo[jAinfo] = '/';
            jAinfo++;


        }
            /* si l'info indique que cette ligne contient un Adverbes*/
        else if ((tab3[i] == 'A') && (tab3[i + 1] == 'd') && (tab3[i + 2] == 'v')) {

            /* Pour prendre toutes les formes fléchis des Adverbes et les mettres dans un tableau*/
            while (nbslaAdflech < nbsla3) {
                if (tab1[nAdflech] == '/') {
                    nbslaAdflech++;

                }
                nAdflech++;

            }
            while (tab1[nAdflech] != '/') {
                tabAdflech[jAdflech] = tab1[nAdflech];
                nAdflech++;
                jAdflech++;

            }
            tabAdflech[jAdflech] = '/';
            jAdflech++;

/* Pour prendre toutes les formes de base des Adverbes et les mettres dans un tableau*/
            while (nbslaAdbase < nbsla3) {
                if (tab2[nAdbase] == '/') {
                    nbslaAdbase++;

                }
                nAdbase++;

            }
            while (tab2[nAdbase] != '/') {
                tabAdbase[jAdbase] = tab2[nAdbase];
                nAdbase++;
                jAdbase++;

            }
            tabAdbase[jAdbase] = '/';
            jAdbase++;

/* Pour prendre toutes les infos des Adverbes et les mettres dans un tableau*/

            while (nbslaAdinfo < nbsla3) {
                if (tab3[nAdinfo] == '/') {
                    nbslaAdinfo++;

                }
                nAdinfo++;

            }
            while (tab3[nAdinfo] != '/') {
                tabAdinfo[jAdinfo] = tab3[nAdinfo];
                nAdinfo++;
                jAdinfo++;

            }
            tabAdinfo[jAdinfo] = '/';
            jAdinfo++;


        }

        i++;


    }

    /*printf("\ntabvflech : %s\n", tabvflech); pour afficher les tableaux classés sous formes de base de verbe, de fléchie de verbe, d'info de verbe, de base de nom, de fléchie de nom etc..
    printf("\ntabvbase : %s\n", tabvbase);
    printf("\ntabvinfo : %s\n\n", tabvinfo);
    printf("\ntabNflech : %s\n", tabNflech);
    printf("\ntabNbase : %s\n", tabNbase);
    printf("\ntabNinfo : %s\n\n", tabNinfo);
    printf("\ntabAflech : %s\n", tabAflech);
    printf("\ntabAbase : %s\n", tabAbase);
    printf("\ntabAinfo : %s\n\n", tabAinfo);
    printf("\ntabAdflech : %s\n", tabAdflech);
    printf("\ntabAdbase : %s\n", tabAdbase);
    printf("\ntabAdinfo : %s\n", tabAdinfo);*/
}

pnode_verbe createarbreV() /*appelle la fonction pour créer un arbre composé des formes de bases des verbes*/
{
v_tree tree1 = EmptyTree();
return createarbreV2(tabvbase,tree1);
}

pnode_verbe createarbreN() /*appelle la fonction pour créer un arbre composé des formes de bases des noms*/
{
    n_tree tree = EmptyTree2();
    return createarbreN2(tabNbase, tree);
}

pnode_verbe createarbreAdj() /*appelle la fonction pour créer un arbre composé des formes de bases des adjectifs*/
{
    a_tree tree = EmptyTree3();
    return createarbreAdj2(tabAbase, tree);
}

pnode_verbe createarbreAdv() /*appelle la fonction pour créer un arbre composé des formes de bases des adverbes*/
{
    adv_tree tree = EmptyTree4();
    return createarbreAdv2(tabAdbase, tree);
}



pnode_verbe createarbreV2(char T[],v_tree tree){
    pnode_verbe v;
    int p,pos = 1;
    int i =1;
    v = createnode(T[0]);
    tree.root = v;
    pnode_verbe temp = tree.root;

    while (T[i] != '/') {
        v->left = createnode(T[i]);
        v = v->left;
        v->value = T[i];

        i++;
    }
    v->inser=pos;


    i++;
    pos++;

    while(T[i]!= NULL) /*Tant qu'on arrive pas a la fin du tableau contenant les formes de base de verbes*/
    {
        if(p == 0)
        {
            temp = tree.root;
        }

        if((T[i]== temp->value) && (temp->left == NULL )){ /*Si la première lettre de la base du verbe que l'on veut inserer correspond à la lettre d'un noeud et que le noeud de gauche est disponilbe alors on écrit cette base de verbe a gauche*/
            i++;

            do {
                if (T[i+1] != '/')
                {
                    temp -> left= createnode(T[i]);
                    temp = temp->left;
                    temp->value = T[i];
                    temp->p = NULL;

                    temp->inser = 0;
                    i++;
                }

                else if (T[i+1] =='/')
                {
                    temp -> left= createnode(T[i]);
                    temp = temp->left;
                    temp->value = T[i];
                    /*temp->p = 'structure';*/
                    temp->inser=pos;

                    i++;
                }

            }while (T[i] != '/');
            p=0;
            i++;
            pos++;
        }

        else if((T[i]== temp->value) && (temp->right == NULL )){ /*Si la première lettre de la base du verbe que l'on veut inserer correspond à la lettre d'un noeud et que le noeud de droite est disponilbe alors on écrit cette base de verbe a droite*/
            i++;
            do {
                if (T[i+1] != '/')
                {
                    temp -> right= createnode(T[i]);
                    temp = temp->right;
                    temp->value = T[i];
                    temp->p = NULL;
                    temp->inser = 0;

                    i++;
                }

                else if (T[i+1] =='/')
                {
                    temp -> right= createnode(T[i]);
                    temp = temp->right;
                    temp->value = T[i];
                    /*temp->p = 'structure';*/
                    temp->inser=pos;

                    i++;
                }

            }while (T[i] != '/');
            p=0;
            i++;
            pos++;

        }
        else if ((T[i] == temp->value) || (T[i] != temp->value))  /*si la base du verbe n'a pas pu se placer car il n'y avait ni le noeud de droite ,ni le noeud de gauche disponilbe, ou alors que sa première lettre ne correspondait a aucune lettre des noeuds alors elle s'écrit au niveau du noeud le plus bas à gauche*/
        {
            if (temp->left != NULL)
            {
                temp = temp->left;
                p=1;
            }
            if (temp->left == NULL)
            {

                temp->left = createnode(T[i]);
                temp = temp->left;
                temp->value = T[i];

            }
        }
    }

    return tree.root;
}

pnode_verbe createarbreN2(char T[],n_tree tree){ /*fonction pour crée un arbre composé des formes de bases des noms*/
    pnode_verbe v;
    int p,pos = 1;
    int i =1;
    v = createnode(T[0]);
    tree.root = v;
    pnode_verbe temp = tree.root; /*création d'un noeud temporaire pour ne pas perdre le root*/

    while (T[i] != '/') { /*boucle pour insérer vers la gauche sous forme de noeuds, la première forme de base de nom qui est dans le dico.txt*/
        v->left = createnode(T[i]);
        v = v->left;
        v->value = T[i];

        i++;
    }
    v->inser=pos;


    i++;
    pos++;

    while(T[i]!= NULL)
    {
        if(p == 0)
        {
            temp = tree.root;
        }

        if((T[i]== temp->value) && (temp->left == NULL )){
            i++;

            do {
                if (T[i+1] != '/')
                {
                    temp -> left= createnode(T[i]);
                    temp = temp->left;
                    temp->value = T[i];
                    temp->p = NULL;

                    temp->inser = 0; /*initialisation de inser à 0 (qui correspond à l'ordre d'insertion de chaque mot dans l'arbre)  pour chaque noeud de l'arbre sauf ceux qui correspondent à la dernière lettre d'une forme de base*/
                    i++;
                }

                else if (T[i+1] =='/')
                {
                    temp -> left= createnode(T[i]);
                    temp = temp->left;
                    temp->value = T[i];
                    /*temp->p = 'structure';*/
                    temp->inser=pos; /*initialisation de inser qui correspond à l'odre d'insertion de la forme de base dans l'arbre.
                                        * Par exemple, la permière forme de base aura comme numéro inser sur sa dernière lettre le chiffre 1 et ainsi de suite*/

                    i++;
                }

            }while (T[i] != '/');
            p=0;
            i++;
            pos++;

        }

        else if((T[i]== temp->value) && (temp->right == NULL )){
            i++;
            do {
                if (T[i+1] != '/')
                {
                    temp -> right= createnode(T[i]);
                    temp = temp->right;
                    temp->value = T[i];
                    temp->p = NULL;
                    temp->inser = 0;

                    i++;
                }

                else if (T[i+1] =='/')
                {
                    temp -> right= createnode(T[i]);
                    temp = temp->right;
                    temp->value = T[i];
                    /*temp->p = 'structure';*/
                    temp->inser=pos;

                    i++;
                }

            }while (T[i] != '/');
            p=0;
            i++;
            pos++;


        }
        else if ((T[i] == temp->value) || (T[i] != temp->value))
        {
            if (temp->left != NULL)
            {
                temp = temp->left;
                p=1;
            }
            if (temp->left == NULL)
            {

                temp->left = createnode(T[i]);
                temp = temp->left;
                temp->value = T[i];

            }
        }

    }

    return tree.root;
}

pnode_verbe createarbreAdj2(char T[],a_tree tree){
    pnode_verbe v;
    int p,pos = 1;
    int i =1;
    v = createnode(T[0]);
    tree.root = v;
    pnode_verbe temp = tree.root;

    while (T[i] != '/') {
        v->left = createnode(T[i]);
        v = v->left;
        v->value = T[i];

        i++;
    }
    v->inser=pos;


    i++;
    pos++;
    while(T[i]!= NULL)
    {
        if(p == 0)
        {
            temp = tree.root;
        }

        if((T[i]== temp->value) && (temp->left == NULL )){
            i++;

            do {
                if (T[i+1] != '/')
                {
                    temp -> left= createnode(T[i]);
                    temp = temp->left;
                    temp->value = T[i];
                    temp->p = NULL;

                    temp->inser = 0;
                    i++;
                }

                else if (T[i+1] =='/')
                {
                    temp -> left= createnode(T[i]);
                    temp = temp->left;
                    temp->value = T[i];
                    /*temp->p = 'structure';*/
                    temp->inser=pos;

                    i++;
                }

            }while (T[i] != '/');
            p=0;
            i++;
            pos++;
        }

        else if((T[i]== temp->value) && (temp->right == NULL )){
            i++;
            do {
                if (T[i+1] != '/')
                {
                    temp -> right= createnode(T[i]);
                    temp = temp->right;
                    temp->value = T[i];
                    temp->p = NULL;
                    temp->inser = 0;

                    i++;
                }

                else if (T[i+1] =='/')
                {
                    temp -> right= createnode(T[i]);
                    temp = temp->right;
                    temp->value = T[i];
                    /*temp->p = 'structure';*/
                    temp->inser=pos;

                    i++;
                }

            }while (T[i] != '/');
            p=0;
            i++;
            pos++;

        }
        else if ((T[i] == temp->value) || (T[i] != temp->value))
        {
            if (temp->left != NULL)
            {
                temp = temp->left;
                p=1;
            }
            if (temp->left == NULL)
            {

                temp->left = createnode(T[i]);
                temp = temp->left;
                temp->value = T[i];

            }
        }
    }
    printf("\n");
    return tree.root;
}

pnode_verbe createarbreAdv2(char T[],adv_tree tree) {
    pnode_verbe v;
    int p, pos = 1;
    int i = 1;
    v = createnode(T[0]);
    tree.root = v;
    pnode_verbe temp = tree.root;

    while (T[i] != '/') {
        v->left = createnode(T[i]);
        v = v->left;
        v->value = T[i];

        i++;
    }
    v->inser=pos;


    i++;
    pos++;

    while (T[i] != NULL) {
        if (p == 0) {
            temp = tree.root;
        }

        if ((T[i] == temp->value) && (temp->left == NULL)) {
            i++;

            do {
                if (T[i + 1] != '/') {
                    temp->left = createnode(T[i]);
                    temp = temp->left;
                    temp->value = T[i];
                    temp->p = NULL;

                    temp->inser = 0;
                    i++;
                } else if (T[i + 1] == '/') {
                    temp->left = createnode(T[i]);
                    temp = temp->left;
                    temp->value = T[i];
                    /*temp->p = 'structure';*/
                    temp->inser=pos;

                    i++;
                }

            } while (T[i] != '/');
            p = 0;
            i++;
            pos++;

        } else if ((T[i] == temp->value) && (temp->right == NULL)) {
            i++;
            do {
                if (T[i + 1] != '/') {
                    temp->right = createnode(T[i]);
                    temp = temp->right;
                    temp->value = T[i];
                    temp->p = NULL;
                    temp->inser = 0;

                    i++;
                } else if (T[i + 1] == '/') {
                    temp->right = createnode(T[i]);
                    temp = temp->right;
                    temp->value = T[i];
                    /*temp->p = 'structure';*/
                    temp->inser=pos;

                    i++;
                }

            } while (T[i] != '/');
            p = 0;
            i++;
            pos++;

        } else if ((T[i] == temp->value) || (T[i] != temp->value)) {
            if (temp->left != NULL) {
                temp = temp->left;
                p = 1;
            }
            if (temp->left == NULL) {

                temp->left = createnode(T[i]);
                temp = temp->left;
                temp->value = T[i];

            }
        }
    }
    printf("\n");
    return tree.root;
}


void aleav (pnode_verbe p1) { /*fonction qui va chercher aléatoirement une forme de base d'un verbe dans l'arbre des bases des verbes
 * pour ensuite qu'elle soit affichée à l'écran en passant par le tableau des formes de base des verbes grâce au numéro d'insertion qui fera office de repère dans le tableau.
 * En effet le numéro d'insertion sera comparé aux nombres de / qui séparent les différentes formes de base dans le tableau contenant les formes de base des verbes*/

    pnode_verbe temp = p1;

    int i = 128;

    for (int j; j <= i; j++) {


        if ((temp->right == NULL) && (temp->left != NULL)) {

            temp = temp->left;
        } else if ((temp->left == NULL) && (temp->right != NULL)) {
            temp = temp->right;

        } else if ((temp->right != NULL) && (temp->left != NULL)) {

            srand(time(NULL));
            int a = rand() % 2;

            if (a == 0) {
                temp = temp->left;
            } else if (a == 1) {

                temp = temp->right;
            }
        }
        if ((temp->right == NULL) && (temp->left == NULL)) {
            temp = p1;
        }
    }

    int z = 0;
    while (z == 0) {
        if (temp->inser != 0 ) {

            int g, nb = 0;
            int cptslash = temp->inser - 1;
            while (nb <= cptslash) {

                if (nb == cptslash) {
                    while((tabNbase[g] != '/') && (tabNbase[g] != NULL)) {
                        g--;
                    }
                    g++;

                    while (tabvbase[g] != '/') {
                        printf("%c", tabvbase[g]);
                        g++;
                    }

                    cptslash = -1;
                    z = 1;
                }
                else if (tabvbase[g] == '/') {
                    nb++;
                    g++;
                }
                else{
                    g++;
                }
            }
        }
        else if ((temp->right == NULL) && (temp->left != NULL)) {

            temp = temp->left;
        }
        else if ((temp->left == NULL) && (temp->right != NULL)) {
            temp = temp->right;

        }
        else if ((temp->left != NULL) && (temp->right != NULL)) {
            srand(time(NULL));

            int a = rand() % 2;

            if (a == 0) {
                temp = temp->left;
            } else if (a == 1) {

                temp = temp->right;
            }
        }
    }
}

void alean(pnode_verbe p1) { /*fonction qui va chercher aléatoirement une forme de base d'un nom dans l'arbre des bases des noms
 * pour ensuite qu'elle soit affichée à l'écran en passant par le tableau des formes de base des noms grâce au numéro d'insertion qui fera office de repère dans le tableau.
 * En effet le numéro d'insertion sera comparé aux nombres de / qui séparent les différentes formes de base dans le tableau contenant les formes de base des noms*/
    pnode_verbe temp = p1;

    int i = 128;

    for (int j; j <= i; j++) {


        if ((temp->right == NULL) && (temp->left != NULL)) {

            temp = temp->left;
        } else if ((temp->left == NULL) && (temp->right != NULL)) {
            temp = temp->right;

        } else if ((temp->right != NULL) && (temp->left != NULL)) {

            srand(time(NULL));
            int a = rand() % 2;

            if (a == 0) {
                temp = temp->left;
            } else if (a == 1) {

                temp = temp->right;
            }
        }
        if ((temp->right == NULL) && (temp->left == NULL)) {
            temp = p1;
        }
    }

    int z = 0;
    while (z == 0) {
        if (temp->inser != 0 ) {

            int g, nb = 0;
            int cptslash = temp->inser - 1;
            while (nb <= cptslash) {

                if (nb == cptslash) {
                    while((tabNbase[g] != '/') && (tabNbase[g] != NULL)) {
                        g--;
                    }
                    g++;
                    while (tabNbase[g] != '/') {
                        printf("%c", tabNbase[g]);
                        g++;
                    }

                    cptslash = -1;
                    z = 1;
                }
                else if (tabNbase[g] == '/') {
                    nb++;
                    g++;
                }
                else{
                    g++;
                }
            }
        }
        else if ((temp->right == NULL) && (temp->left != NULL)) {

            temp = temp->left;
        }
        else if ((temp->left == NULL) && (temp->right != NULL)) {
            temp = temp->right;

        }
        else if ((temp->left != NULL) && (temp->right != NULL)) {
            srand(time(NULL));

            int a = rand() % 2;

            if (a == 0) {
                temp = temp->left;
            } else if (a == 1) {

                temp = temp->right;
            }
        }
    }
}




void aleaadj(pnode_verbe p1) {/*fonction qui va chercher aléatoirement une forme de base d'un ajectif dans l'arbre des bases des adjectifs
 * pour ensuite qu'elle soit affichée à l'écran en passant par le tableau des formes de base des adjectifs grâce au numéro d'insertion qui fera office de repère dans le tableau.
 * En effet le numéro d'insertion sera comparé aux nombres de / qui séparent les différentes formes de base dans le tableau contenant les formes de base des adjectifs*/

    pnode_verbe temp = p1;

    int i = 128;

    for (int j; j <= i; j++) {


        if ((temp->right == NULL) && (temp->left != NULL)) {

            temp = temp->left;
        } else if ((temp->left == NULL) && (temp->right != NULL)) {
            temp = temp->right;

        } else if ((temp->right != NULL) && (temp->left != NULL)) {

            srand(time(NULL));
            int a = rand() % 2;


            if (a == 0) {
                temp = temp->left;
            } else if (a == 1) {

                temp = temp->right;
            }
        }
        if ((temp->right == NULL) && (temp->left == NULL)) {
            temp = p1;
        }
    }

    int z = 0;
    while (z == 0) {
        if (temp->inser != 0 ) {

            int g, nb = 0;
            int cptslash = temp->inser - 1;
            while (nb <= cptslash) {

                if (nb == cptslash) {
                    while((tabAbase[g] != '/') && (tabAbase[g] != NULL)) {
                        g--;
                    }
                    g++;


                    while (tabAbase[g] != '/') {
                        printf("%c", tabAbase[g]);
                        g++;
                    }

                    cptslash = -1;
                    z = 1;
                }
                else if (tabAbase[g] == '/') {
                    nb++;
                    g++;
                }
                else{
                    g++;
                }
            }
        }
        else if ((temp->right == NULL) && (temp->left != NULL)) {

            temp = temp->left;
        }
        else if ((temp->left == NULL) && (temp->right != NULL)) {
            temp = temp->right;

        }
        else if ((temp->left != NULL) && (temp->right != NULL)) {
            srand(time(NULL));

            int a = rand() % 2;

            if (a == 0) {
                temp = temp->left;
            } else if (a == 1) {

                temp = temp->right;
            }
        }
    }
}

void aleaadv(pnode_verbe p1) /*fonction qui va chercher aléatoirement une forme de base d'un adverbe dans l'arbre des bases des adverbes
 * pour ensuite qu'elle soit affichée à l'écran en passant par le tableau des formes de base des adverbes grâce au numéro d'insertion qui fera office de repère dans le tableau.
 * En effet le numéro d'insertion sera comparé aux nombres de / qui séparent les différentes formes de base dans le tableau contenant les formes de base des adverbes*/
{
    pnode_verbe temp = p1;

    int i = 128;

    for (int j; j <= i; j++) {


        if ((temp->right == NULL) && (temp->left != NULL)) {

            temp = temp->left;
        } else if ((temp->left == NULL) && (temp->right != NULL)) {
            temp = temp->right;

        } else if ((temp->right != NULL) && (temp->left != NULL)) {

            srand(time(NULL));
            int a = rand() % 2;


            if (a == 0) {
                temp = temp->left;
            } else if (a == 1) {

                temp = temp->right;
            }
        }
        if ((temp->right == NULL) && (temp->left == NULL)) {
            temp = p1;
        }
    }

    int z = 0;
    while (z == 0) {
        if (temp->inser != 0 ) {

            int g, nb = 0;
            int cptslash = temp->inser - 1;
            while (nb <= cptslash) {

                if (nb == cptslash) {
                    while((tabAdbase[g] != '/') && (tabAdbase[g] != NULL)) {
                        g--;
                    }
                    g++;


                    while (tabAdbase[g] != '/') {
                        printf("%c", tabAdbase[g]);
                        g++;
                    }

                    cptslash = -1;
                    z = 1;
                }
                else if (tabAdbase[g] == '/') {
                    nb++;
                    g++;
                }
                else{
                    g++;
                }
            }
        }
        else if ((temp->right == NULL) && (temp->left != NULL)) {

            temp = temp->left;
        }
        else if ((temp->left == NULL) && (temp->right != NULL)) {
            temp = temp->right;

        }
        else if ((temp->left != NULL) && (temp->right != NULL)) {
            srand(time(NULL));

            int a = rand() % 2;

            if (a == 0) {
                temp = temp->left;
            } else if (a == 1) {

                temp = temp->right;
            }
        }
    }
}
void aleavf()
{
    int nb ,i= 0;
    srand(time(NULL));
    int nbsla = rand() % 13;
    while(nb<=nbsla)
    {
        if(tabvflech[i] == '/') {
            nb++;
            i++;
        }
        else
            i++;
    }

    while(tabvflech[i] != '/') {
        printf("%c", tabvflech[i]);
        i++;
    }

}
void aleanf()
{
    int nb ,i= 0;
    srand(time(NULL));
    int nbsla = rand() % 2;
    while(nb<=nbsla)
    {
        if(tabNflech[i] == '/') {
            nb++;
            i++;
        }
        else
            i++;
    }

    while(tabNflech[i] != '/') {
        printf("%c", tabNflech[i]);
        i++;
    }


}
void aleaadjf()
{
    int nb ,i= 0;
    srand(time(NULL));
    int nbsla = rand() % 3;
    while(nb<=nbsla)
    {
        if(tabAflech[i] == '/') {
            nb++;
            i++;
        }
        else
            i++;
    }

    while(tabAflech[i] != '/') {
        printf("%c", tabAflech[i]);
        i++;
    }

}
