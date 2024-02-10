#include <stdlib.h>

#include "utils_v1.h"
#include "crypt.h"

int main(int argc, char const *argv[])
{
    char* msg = readLine();

    char* crypter = encrypt(msg);

    printf("%s\n", crypter);

    free(msg);

    return 0;
}
