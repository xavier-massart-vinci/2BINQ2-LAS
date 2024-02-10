#include <stdlib.h>

#include "utils_v1.h"
#include "crypt.h"

int main(int argc, char const *argv[])
{
    char* msg = readLine();

    char* decrypter = decrypt(msg);

    printf("%s\n", decrypter);

    free(msg);

    return 0;
}
