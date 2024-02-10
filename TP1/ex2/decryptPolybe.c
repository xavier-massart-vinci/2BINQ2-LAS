#include <stdlib.h>
#include <string.h>

#include "utils_v1.h"
#include "cryptPolybe.h"

int main(int argc, char const *argv[])
{
    char* msg = readLine();
    if(msg == NULL){
        printError("msg is NULL");
        exit(1);
    }

    char* decrypt = decryptPolybe(msg);
    if(decrypt == NULL){
        printError("decrypt is NULL");
        exit(1);
    }

    printf("%s\n", decrypt);
    
    free(msg);
    free(decrypt);

    return 0;
}




