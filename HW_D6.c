#include <stdio.h>
#include <stdlib.h>

void Reverse( char* p) {
    if (*p) {

        if (*p != '.') {
            Reverse(p + 1);
        }
        if(*p == '.') return;
        printf("%c", *p);

    }
}

int main() {

    char stroka[200];
    gets(stroka);
    Reverse(stroka);
    return 0;
}
