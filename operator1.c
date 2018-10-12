#include <stdio.h>

int main() {
    float a = 4;
    int b = 7;

    printf("%f\n", a++ + b);
    printf("%f\n", ++a + b);

    printf("%f\n", --a + b);
    printf("%f\n", a-- + b);

    return 0;
}
