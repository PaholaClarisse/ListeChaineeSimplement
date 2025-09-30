#include <stdio.h>
#include <stdlib.h>

typedef struct Cellule {
    int val;
    struct Cellule* suiv;
} Cellule;

int main() {
    Cellule *l = NULL, *dernier = NULL, *p, *courant;
    int n, v, e;

    do {
    printf("Entrer le nombre d'elements de notre liste: ");
    scanf("%d", &n);
    if(n <= 0) { 
    printf(" ERREUR: Nombre invalide, veuillez entrer un entier.\n");
        }
    } while (n <= 0);

    printf("Entrer le nombre dont on doit supprimer les occurrences: ");
    scanf("%d", &e);

    // saisie des éléments
    for(int i=0;i<n;i++) {
        printf("Entrer l'entier %d a mettre dans la liste : ", i+1);
        scanf("%d", &v);

        p = malloc(sizeof(Cellule));
        p->val = v;
        p->suiv = NULL;

        if(l == NULL)
        l = p;
        else dernier->suiv = p;
        dernier = p;
    }

    // affichage de notre liste avant suppression
    printf("Liste avant suppression: ");
    p = l;
    while(p != NULL) {
    printf("%d ", p->val); 
    p = p->suiv; }
    printf("\n");

    // suppression des occurrences
    p = l; 
    courant = NULL;
    while(p != NULL) {
        if(p->val == e) {
            if(courant == NULL) l = p->suiv;
            else courant->suiv = p->suiv;
            Cellule* temp = p;
            if(courant == NULL) p = l;
            else p = courant->suiv;
            free(temp);
        } else {
            courant = p;
            p = p->suiv;
        }
    }

    // affichage après suppression
    printf("Liste apres suppression: ");
    p = l;
    while(p != NULL) { 
    printf("%d ", p->val);
    p = p->suiv; }
    printf("\n");

    return 0;
}
