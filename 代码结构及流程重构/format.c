#include <stdio.h>
#include "file.h"

int brace(FILE* sf, FILE* tf) {
    long length = 0;
    long total = 0;
    char buff = '\0';

    length = Flength(sf);

    while (total < length) {
        buff = Fgetc(sf);
        if (buff=='{') {
            Fputc(tf, buff);
            Fputc_nt(tf);
        }
        else {
            Fputc(tf, buff);
        }
        total = ftell(sf);
        fflush(tf);
    }
    return 0;
}