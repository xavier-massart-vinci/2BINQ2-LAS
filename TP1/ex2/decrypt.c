#include <stdlib.h>

#include "utils_v1.h"
#include "crypt.h"

int main(int argc, char const *argv[])
{
    char* msg = readLine();

    char* uncypted = decrypt(msg);

    printf("%s\n", uncypted);

    free(msg);
    free(uncypted);

    return 0;
}
