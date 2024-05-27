#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
#define MAX 512
#include "liste.h"
#include "cell.h"
#include <time.h>
#include <string.h>


int main() {

    int i, j, k, l; /*initialisation des variables pour extraire les trois colonnes du dico.txt*/
    int choix,choix2,choix3,choix4;
    char chaine[MAX];
    char tab1[MAX];
    char tab2[MAX];
    char tab3[MAX];
    FILE *fichier = fopen("../dico.txt", "r");


    if (fichier != NULL) {
        printf("fichier ouvert \n");
        printf("\n");
        int a = 0;
        while (fgets(chaine, MAX, fichier)) {
            i = 0;

            while (a != 1) {

                a = 1;
                j = 0;
                k = 0;
                l = 0;
            }


            while (chaine[i] != '\t') { /*extrait la première colonne et l'insère dans tab1*/
                tab1[j] = chaine[i];


                i = i + 1;
                j = j + 1;

            }
            tab1[j] = '/';
            j++;
            i++;


            while (chaine[i] != '\t') { /*extrait la deuxième colonne et l'insère dans tab2*/
                tab2[k] = chaine[i];
                i = i + 1;
                k = k + 1;

            }


            tab2[k] = '/';
            k++;

            i++;

            while (chaine[i] != '\n') { /*extrait la troisième colonne et l'insère dans tab3*/
                tab3[l] = chaine[i];
                i = i + 1;
                l = l + 1;
            }

            tab3[l] = '/';
            l++;


        }




        classerfonction(tab1,tab2,tab3); /*appelle une fonction qui va trier ces trois tableaux.
                                        * Chaque tableau mis en paramètre va être divisé en trois sous tableaux.
                                        * Un qui va contenir uniquement les formes de bases, l'autre les formes fléchies et le dernier les informations.
                                        * Cela à été réalisé pour une utilisation plus simple, plus optimisée et plus rapide des mots présents dans le dictionnaire*/

        pnode_verbe arbrebaseverbe = createarbreV();
        pnode_nom arbrebasenom = createarbreN();
        pnode_adj arbrebaseadj = createarbreAdj();
        pnode_adv arbrebaseadv = createarbreAdv();







        printf("1. Obtenir une phrase de mot de base \n2. Obtenir une phrase de mot fl%cchi \n3. Extraire une forme de base\n",130); /*Menu d'acceuil*/
        scanf("%d",&choix);

        switch(choix){


            case 1:
                printf("OBTENIR UNE PHRASE DE MOT DE BASE\n\n");    /* 2ème choix pour le modèle à choisir*/
                printf("Quel mod%cle souhaitez vous? \n\n",138);
                printf("1. nom %c adjectif %c verbe %c nom \n2. nom %c %cqui%c %c verbe %c verbe %c nom %c adjectif \n3. %cDonc%c %c verbe %c nom %c adjectif \n4. %cMais%c %c verbe %c verbe %c adjectif %c nom\n",196,196,196,196,34,34,196,196,196,196,34,34,196,196,196,34,34,196,196,196,196);
                scanf("%d",&choix2);


                switch(choix2){
                    case 1:

                        alean(arbrebasenom); /*Permet de sortir de l'arbre une forme de base d'un nom aléatoirement*/
                        printf(" ");
                        aleaadj(arbrebaseadj); /*Permet de sortir de l'arbre une forme de base d'un verbe aléatoirement*/
                        printf(" ");
                        aleav(arbrebaseverbe); /*Permet de sortir de l'arbre une forme de base d'un verbe aléatoirement*/
                        printf(" ");
                        alean(arbrebasenom); /*Permet de sortir de l'arbre une forme de base d'un nom aléatoirement*/


                        break;
                    case 2:
                        alean(arbrebasenom); /*Permet de sortir de l'arbre une forme de base d'un nom aléatoirement*/
                        printf(" qui ");
                        aleav(arbrebaseverbe); /*Permet de sortir de l'arbre une forme de base d'un verbe aléatoirement*/
                        printf(" ");
                        aleav(arbrebaseverbe); /*Permet de sortir de l'arbre une forme de base d'un verbe aléatoirement*/
                        printf(" ");
                        alean(arbrebasenom); /*Permet de sortir de l'arbre une forme de base d'un nom aléatoirement*/
                        printf(" ");
                        aleaadj(arbrebaseadj); /*Permet de sortir de l'arbre une forme de base d'un adjectif aléatoirement*/



                        break;
                    case 3:
                        printf(" Donc ");
                        aleav(arbrebaseverbe); /*Permet de sortir de l'arbre une forme de base d'un verbe aléatoirement*/
                        printf(" ");
                        alean(arbrebasenom); /*Permet de sortir de l'arbre une forme de base d'un nom aléatoirement*/
                        printf(" ");
                        aleaadj(arbrebaseadj); /*Permet de sortir de l'arbre une forme de base d'un adjectif aléatoirement*/
                        break;

                    case 4:
                        printf(" Mais ");
                        aleav(arbrebaseverbe); /*Permet de sortir de l'arbre une forme de base d'un verbe aléatoirement*/
                        printf(" ");
                        aleav(arbrebaseverbe); /*Permet de sortir de l'arbre une forme de base d'un verbe aléatoirement*/
                        printf(" ");
                        aleaadj(arbrebaseadj); /*Permet de sortir de l'arbre une forme de base d'un adjectif aléatoirement*/
                        printf(" ");
                        alean(arbrebasenom); /*Permet de sortir de l'arbre une forme de base d'un nom aléatoirement*/
                        break;


                }


                break;
            case 2:
                printf("OBTENIR UNE PHRASE DE MOT FLECHI\n\n"); /* 2ème choix pour le modèle à choisir*/
                printf("Quel mod%cle souhaitez vous? \n\n",138);
                printf("1. nom %c adjectif %c verbe %c nom \n2. nom %c %cqui%c %c verbe %c verbe %c nom %c adjectif \n3. %cDonc%c %c verbe %c nom %c adjectif \n4. %cMais%c %c verbe %c verbe %c adjectif %c nom\n",196,196,196,196,34,34,196,196,196,196,34,34,196,196,196,34,34,196,196,196,196);
                scanf("%d",&choix3);


                switch(choix3){
                    case 1:
                        aleanf(); /*Permet de sortir du tableau une forme fléchie d'un nom aléatoirement*/
                        printf(" ");
                        aleaadjf(); /*Permet de sortir du tableau une forme fléchie d'un adjectif aléatoirement*/
                        printf(" ");
                        aleavf(); /*Permet de sortir du tableau une forme fléchie d'un verbe aléatoirement*/
                        printf(" ");
                        aleanf(); /*Permet de sortir du tableau une forme fléchie d'un nom aléatoirement*/

                        break;
                    case 2:
                        aleanf(); /*Permet de sortir du tableau une forme fléchie d'un nom aléatoirement*/
                        printf(" qui ");
                        aleavf(); /*Permet de sortir du tableau une forme fléchie d'un verbe aléatoirement*/
                        printf(" ");
                        aleavf(); /*Permet de sortir du tableau une forme fléchie d'un verbe aléatoirement*/
                        printf(" ");
                        aleanf(); /*Permet de sortir du tableau une forme fléchie d'un nom aléatoirement*/
                        printf(" ");
                        aleaadjf(); /*Permet de sortir du tableau une forme fléchie d'un adjectif aléatoirement*/

                        break;

                    case 3:
                        printf(" Donc ");
                        aleavf();
                        printf(" ");
                        aleanf();
                        printf(" ");
                        aleaadjf();
                        break;

                    case 4:
                        printf(" Mais ");
                        aleavf();
                        printf(" ");
                        aleavf();
                        printf(" ");
                        aleaadjf();
                        printf(" ");
                        aleanf();
                        break;


                }
                break;
            case 3:
                printf("EXTRAIRE UNE FORME DE BASE\n\n");    /* 2ème choix pour le modèle à choisir*/
                printf("Quelle forme de mot de base souhaitez vous extraire ? \n\n",138);
                printf("1. Verbe \n2. Nom \n3. Adjectif \n4. Adverbe \n");
                scanf("%d",&choix4);


                switch(choix4){
                    case 1:
                        aleav(arbrebaseverbe); /*Permet de sortir de l'arbre une forme de base d'un verbe aléatoirement*/
                        break;

                    case 2:
                        alean(arbrebasenom); /*Permet de sortir de l'arbre une forme de base d'un nom aléatoirement*/
                        break;

                    case 3:
                        aleaadj(arbrebaseadj); /*Permet de sortir de l'arbre une forme de base d'un adjectif aléatoirement*/
                        break;

                    case 4:
                        aleaadv(arbrebaseadv); /*Permet de sortir de l'arbre une forme de base d'un adjectif aléatoirement*/
                }


                break;
        }



        return 0;
    }

}
