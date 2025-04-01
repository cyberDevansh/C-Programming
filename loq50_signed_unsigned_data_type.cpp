#include <stdio.h>
#include <conio.h>
int main()
{ 
    // implement signed and unsigned data type
    int a = 108;
    unsigned int b = -101;
    signed int c = -7;
    int d = -1;

    printf("signed   a=%d\tsigned   b=%d\tsigned   c=%d\tsigned   d=%d\n", (signed)a,(signed) b,(signed) c,(signed) d);
    printf("signed   a=%d\tsigned   b=%d\tsigned   c=%d\tsigned   d=%d\n", a, b, c, d);
    printf("unsigned a=%d\tunsigned b=%d\tunsigned c=%d\tunsigned d=%d\n", a, b, c, d);
    printf("unsigned a=%d\tunsigned b=%d\tunsigned c=%d\tunsigned d=%d\n", (unsigned)a, (unsigned)b, (unsigned)c, (unsigned)d);

    // A signed integer can store both positive and negative numbers, including zero and 
    // An unsigned integer can store only non-negative numbers (0 and positive values).

    

    printf("\n\nsigned   a=%d\tsigned   b=%d\tsigned   c=%d\tsigned   d=%d\n", (signed)a,(signed) b,(signed) c,(signed) d);
    printf("signed   a=%d\tsigned   b=%d\tsigned   c=%d\tsigned   d=%d\n", a, b, c, d);
    printf("unsigned a=%u\tunsigned b=%u\tunsigned c=%u\tunsigned d=%u\n", a, b, c, d);
    printf("unsigned a=%u\tunsigned b=%u\tunsigned c=%u\tunsigned d=%u\n", (unsigned)a, (unsigned)b, (unsigned)c, (unsigned)d);

    getch();
    return 0;
}