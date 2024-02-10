

#ifndef _BIILIO_H_
#define _BIILIO_H_

#include <stdbool.h>

enum Genre
{
    BD, POSIE, THEATRE, ROMAN, ROMAN_HISTORIQUE, 
    LITTERATURE_FRANCAISE, LITTERATURE_ETRANGERE, SCIENCE,
    INFORMATIQUE, SCIENCE_FICTION, SANTE, HISTOIRE
};

struct Livre
{
    char titre[100];
    char auteur[80];
    long int isbn;
    char editeur[50];
    int anneeEdition;
    enum Genre genre;
};

bool lireLivre(struct Livre *l);
enum Genre str2genre(char* str);
char* genre2str(enum Genre genre);
char* livre2str(const struct Livre *livre);
void afficherBib(struct Livre* livres, const int* size);
bool ajouterLivre(struct Livre **livres, const struct Livre *livre);



#endif