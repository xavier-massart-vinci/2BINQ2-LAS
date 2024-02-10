#include "cryptMorse.h"
#include <string.h>
#include <ctype.h>


#include <stdlib.h>
#include <stdio.h>

#define TABLE_SIZE 26
#define MORESE_SIZE 6
static char morese[26][6] =
{
    {"A*-"},
    {"B-***"},
    {"C-*-*"},
    {"D-**"},
    {"E*"},
    {"F**-*"},
    {"G--*"},
    {"H****"},
    {"I**"},
    {"J*---"},
    {"K-*-"},
    {"L*-**"},
    {"M--"},
    {"N-*"},
    {"O---"},
    {"P*--*"},
    {"Q--*-"},
    {"R*-*"},
    {"S***"},
    {"T-"},
    {"U**-"},
    {"V***-"},
    {"W*--"},
    {"X-**-"},
    {"Y-*--"},
    {"Z--**"},
};

char* encryptMorse(char* msg){
    char* crypt = (char*) malloc((strlen(msg)*4) * sizeof(char));
    if(crypt == NULL) return NULL;

    int index = 0;
    for (int i = 0; i < strlen(msg); ++i)
    {
        for (int j = 0; j < TABLE_SIZE; ++j)
        {
            if(morese[j][0] == toupper(msg[i])){
               for (int k = 1; k < MORESE_SIZE; ++k)
                {   
                  if(morese[j][k] != '\0'){
                    crypt[index] = morese[j][k];
                    index++;
                  }
                } 
            }
        }
        crypt[index] = ' ';
        index++;
    }

    crypt = (char*) realloc(crypt, strlen(crypt) * sizeof(char));
    if(crypt == NULL) return NULL;

    return crypt;
}


char* decryptMorse(char* msg){
    char* crypt = (char*) malloc(strlen(msg) * sizeof(char));
    if(crypt == NULL) return NULL;

    int index = 0;
    for (int i = 0; i < strlen(msg); ++i){
        for (int i = 0; i < count; ++i){
            /* code */
        }
    }


    crypt = (char*) realloc(crypt, strlen(crypt) * sizeof(char));
    if(crypt == NULL) return NULL;

    return crypt;
}