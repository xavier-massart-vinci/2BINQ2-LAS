#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>

#define TABLE_LEN 8
static char square[8][8] =
{{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
{'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'},
{'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X'},
{'Y', 'Z', '0', '1', '2', '3', '4', '5'},
{'6', '7', '8', '9', ' ', '!', '"', '#'},
{'$', '%', '&', '\'', '(', ')', '*', '+'},
{',', '-', '.', '/', ':', ';', '<', '='},
{'>', '?', '@', '[', '\\', ']', '^', '_'}};



int* encryptPolybe(char* msg, int* size){

    int index = 0;
    *size = (strlen(msg)*2);

    int* encrypted = (int*) malloc((*size)*sizeof(int));
    if(encrypted == NULL) return NULL;


    // all chars
    bool isFind = false;
    for (int i = 0; i < strlen(msg); ++i)
    {
        isFind = false;
        // find code in table
        for (int j = 0; j < TABLE_LEN; ++j)
        {
            for (int k = 0; k < TABLE_LEN; ++k)
            {
                if(toupper(msg[i]) == square[j][k]){
                    encrypted[index] = j+1;
                    index++;
                    encrypted[index] = k+1;
                    index++;
                    isFind = true;
                    break;
                }
            }
            if(isFind==true) break;

        }
    }
    return encrypted;
}


char* decryptPolybe(char* msg){

    char* uncrypted = (char*) malloc(((strlen(msg)/2)+1) * sizeof(char));
    if(uncrypted == NULL) return NULL;

    int index = 0;
    for (int i = 0; i < strlen(msg); i += 2)
    {
        
        // -48 ASCII TABLE 
        uncrypted[index] = square[(msg[i]-48)-1][(msg[i+1]-48)-1];
        index++;
    }

    return uncrypted;
}