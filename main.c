#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Include the entire package
#include <C_TYPES/c_types.h>
#include "C_TYPES/String/str.h"

int main() {
    str *s = string("");
    s->Utils(s, _APPEND, "TEST");
    printf("%s\n", s->data);

    free(s);
    return 0;
}