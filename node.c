#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
#define MAX 256
#include "liste.h"
#include "cell.h"
#include "arbre.h"
#include "node.h"


pnode_verbe createnode(char T){
    pnode_verbe p_res;
    p_res = (pnode_verbe ) malloc(sizeof(tnode_verbe)) ;
    p_res->value=T ;
    p_res->left=NULL ;
    p_res->right=NULL ;


    return p_res ;
}
