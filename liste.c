#include "liste.h"
#include <stddef.h>
#include <stdlib.h>


t_std_list create_empty_liste() // Création d'une liste fléchie vide
{
    t_std_list new_list;
    new_list.head=NULL;
    return new_list;

}
