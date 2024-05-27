#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
#define MAX 256
#include "liste.h"
#include "cell.h"
#include "arbre.h"
#include <stddef.h>


v_tree EmptyTree() /*création arbre vide pour les bases des verbes*/
{
    v_tree atree;

    atree.root = NULL;

    return atree;
}


n_tree EmptyTree2() /*création arbre vide pour les bases des noms*/
{
    n_tree atree;

    atree.root = NULL;

    return atree;
}

a_tree EmptyTree3() /*création arbre vide pour les bases des adjectifs*/
{
    a_tree atree;

    atree.root = NULL;

    return atree;
}

adv_tree EmptyTree4() /*création arbre vide pour les bases des adverbes*/
{
    adv_tree atree;

    atree.root = NULL;

    return atree;
}
