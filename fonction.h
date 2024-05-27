#include "liste.h"
#include <stddef.h>
#include "arbre.h"
#ifndef FLECHI_C_FONCTION_H
#define FLECHI_C_FONCTION_H



t_std_list createliste();
void classerfonction(char tab1[],char  tab2[],char  tab3[]);
v_tree EmptyTree();
n_tree EmptyTree2();
a_tree EmptyTree3();
adv_tree EmptyTree4();

pnode_verbe createarbreV();
pnode_verbe createarbreN();
pnode_verbe createarbreAdj();
pnode_verbe createarbreAdv();

pnode_verbe createarbreV2(char T[], v_tree tree);
pnode_verbe createarbreN2(char T[], n_tree tree);
pnode_verbe createarbreAdj2(char T[], a_tree tree);
pnode_verbe createarbreAdv2(char T[], adv_tree tree);

void aleav (pnode_verbe p1);
void alean (pnode_verbe p1);
void aleaadj (pnode_verbe p1);
void aleaadv (pnode_verbe p1);

void aleavf();
void aleanf();
void aleaadjf();




#endif //FLECHI_C_FONCTION_H
