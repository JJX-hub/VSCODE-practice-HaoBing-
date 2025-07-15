#include <stdio.h>
#include <limits.h>

int main(void)
{
    signed char i;
    unsigned char j;

    signed short k;
    unsigned short l;

    signed int a;
    unsigned int b;

    signed long c;
    unsigned long d;

    printf("%d\n", SCHAR_MAX);
    printf("%d\n", SCHAR_MIN);
    printf("%u\n", UCHAR_MAX);

    return 0;
}