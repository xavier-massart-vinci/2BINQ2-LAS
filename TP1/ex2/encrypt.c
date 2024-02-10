#include <stdlib.h>

#include "utils_v1.h"
#include "crypt.h"

int main(int argc, char const *argv[])
{
    char* msg = readLine();

    char* crypted = encrypt(msg);

    printf("%s\n", crypted);

    free(msg);
    free(crypted);

    return 0;
}
