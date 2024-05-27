#ifndef MAIN_C_ARBRE_H
#define MAIN_C_ARBRE_H



typedef struct v_node
{
    struct v_node *left ;
    struct v_node *right ;
    char value ;
    int inser;
    struct inter_verb * p ;
} tnode_verbe, *pnode_verbe ;

typedef struct n_node
{
    struct n_node *left ;
    struct n_node *right ;
    int inser;
    char value ;
    struct inter_nom * p ;
} tnode_nom, *pnode_nom ;

typedef struct a_node
{
    struct a_node *left;
    struct a_node *right ;
    char value ;
    int inser;
    struct inter_adj * p ;
} tnode_adj, *pnode_adj ;

typedef struct adv_node
{
    struct adv_node *left;
    struct adv_node *right ;
    char value ;
    int inser;
    struct inter_adj * p ;
} tnode_adv, *pnode_adv ;

typedef struct s_tree
{
    pnode_verbe root ;
} v_tree ;


typedef struct z_tree
{
    pnode_nom root ;
} n_tree ;


typedef struct e_tree
{
    pnode_adj root ;
} a_tree ;

typedef struct d_tree
{
    pnode_adv root ;
} adv_tree ;

#endif //MAIN_C_ARBRE_H
