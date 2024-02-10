#include "utils_v1.h"
#include "biblio.h"



bool lireLivre(struct Livre *l){

};

enum Genre str2genre(char* str);
char* genre2str(enum Genre genre);
char* livre2str(const struct Livre *livre);
void afficherBib(struct Livre* livres, const int* size);
bool ajouterLivre(struct Livre **livres, const struct Livre *livre);