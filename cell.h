
#ifndef FLECHI_C_CELL_H
#define FLECHI_C_CELL_H


struct s_cell
{
    char value;
    struct s_cell *next;
};
typedef struct s_cell t_cell, *p_cell;


p_cell createcell(char T);

#endif //FLECHI_C_CELL_H
