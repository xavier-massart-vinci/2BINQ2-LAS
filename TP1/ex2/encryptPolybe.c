#include <stdlib.h>

#include "utils_v1.h"
#include "cryptPolybe.h"

int main(int argc, char const *argv[])
{
    char* msg = readLine();
    
    if(msg == NULL){
        printError("readLine is NULL");
        exit(1);
    } 


    int size = 0;
    int* crypted = encryptPolybe(msg, &size);
    
    if(crypted == NULL){
        printError("crypter is NULL");
        exit(1);
    } 

    // display crypted
    for (int i = 0; i < size; ++i)
    {
        printf("%d", crypted[i]);
    }
    printf("\n");
    

    free(msg);
    free(crypted);

    return 0;
}
