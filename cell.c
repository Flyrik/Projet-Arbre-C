#include "cell.h"
#include "liste.h"
#include <stddef.h>
#include <stdlib.h>
p_cell createcell(char T){
    p_cell p_res;
    p_res = (p_cell) malloc(sizeof(t_cell)) ;

    p_res->value=T ;
    p_res->next=NULL ;

    return p_res ;
}
