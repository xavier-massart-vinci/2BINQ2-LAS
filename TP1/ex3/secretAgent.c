#include <stdlib.h>
#include <stdio.h>

#include "utils_v1.h"
#include "crypt.h"
#include "cryptPolybe.h"
#include "cryptMorse.h"


int main(int argc, char const *argv[])
{
    char* choix = NULL;

    do{
        printf("-----------\n"); 
        printf("1. Cryptage\n");  
        printf("2. Décryptage\n"); 
        printf("Entrez votre choix (Ctrl-D pour terminer) :");

        choix = readLine();
        printf("----------------\n"); 

        if(choix != NULL){
            printf("1. ROT13\n");
            printf("2. Polybe\n");
            printf("3. Morse\n");
            printf("-----------\n"); 

            printf("Entrez votre choix :");
            char* typeChoixElem = readLine();

            printf("Entrer: ");
            char* entrer = readLine();

            switch(atoi(typeChoixElem)){
                case 1:
                    if(atoi(choix) == 1){
                        char* encrypted = encrypt(entrer);
                        printf("--> %s\n", encrypted);
                        free(encrypted);
                    }else{
                        char* decrypted = decrypt(entrer);
                        printf("--> %s\n", decrypted);
                        free(decrypted);
                    }
                    
                    break;
                case 2:
                    if(atoi(choix) == 1){
                        int size = 0;
                        int* encrypted = encryptPolybe(entrer, &size);
                        printf("-->");
                        for (int i = 0; i < size; ++i)
                        {
                           printf("%d", encrypted[i]);
                        }
                        printf("\n");
                        free(encrypted);
                    }else{
                        char* decrypted = decryptPolybe(entrer);
                        printf("--> %s\n", decrypted);
                        free(decrypted); 
                    }

                    break; 
                case 3:
                    if(atoi(choix) == 1){
                        char* decrypted = encryptMorse(entrer);
                        printf("--> %s\n", decrypted);
                        free(decrypted);     
                    }else{
                        
                    }

                    break; 
                default:
                    break;
            }  
            free(typeChoixElem);
        }
        free(choix);
        
    }while(choix != NULL);


    return 0;
}