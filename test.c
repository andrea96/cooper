#include <stdio.h>
#include "cooper.h"

int main(int argc, char** argv) {
    if (argc == 3)
        printf("%s", cooper(argv[1], argv[2]));
    else
        printf("Wrong arguments number!");

    return 0;
}
