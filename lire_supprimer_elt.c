#include <stdio.h>
// on cree notre variables dynamique
typedef struct cellule{
valeur:int;
}
int main(){
  int i,n,v,e;
  struct cellule *p;
  struct cellule *l;
  struct cellule *courant;
l = NULL;
i = 1;
printf("\nentrer le nombre d'elements de votre liste:\n");
scanf("%d", &n);
if (n <= 0) {
printf(" %d, est invalide , veuillez reessayer.");
} else {
printf("\nentrer le nombre dont on doit supprimer les occurrences :\n");
scanf("%d", &e);}
do {
printf("\nentrez les elements de votre liste:\n");
scanf("%d",&v);
p = (struct cellule*)malloc(sizeof(struct cellule));
v = p.valeur;
p.suiv = l;
l = p;
i = i + 1;
}while( i = 1 + n);
p = l;
courant = NULL;
while(p != NULL){
if (p.valeur == e) {
if courant == NULL){
l = p.suiv;
} else{
courant.suiv = p.suiv;
free(p);}}}
if (courant == NULL){
p = l;
} else{
p = courant.suiv;
} else{
courant = p;
p = p.suiv;
}
p = l;
while(p != NULL) {
printf(p.valeur);
p = p.suiv;
}}


  
