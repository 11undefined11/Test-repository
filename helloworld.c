#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("size of int: %zu, limits of int; max: %d; min: %d\n", sizeof(int), INT_MAX, INT_MIN);
    printf("size of float: %zu, max: %e, min: %e\n", sizeof(float), FLT_MAX, FLT_MIN);
    printf("size of char: %zu, limits of char; max: %d; min: %d\n", sizeof(char), CHAR_MAX, CHAR_MIN);
    printf("size of signed char: %zu\n", sizeof(signed char));
    printf("size of unsigned char: %zu\n", sizeof(unsigned char));
    printf("size of short: %zu\n", sizeof(short));
    printf("size of signed short: %zu\n", sizeof(signed short));
    printf("size of signed short int: %zu\n", sizeof(signed short int));
    printf("size of signed: %zu\n", sizeof(signed));
    printf("size of signed int: %zu\n", sizeof(signed int));
    printf("size of unsigned: %zu\n", sizeof(unsigned));
    printf("size of unsigned int: %zu\n", sizeof(unsigned int));
    printf("size of long: %zu\n", sizeof(long));
    printf("size of long int: %zu\n", sizeof(long int));
    printf("size of signed long: %zu\n", sizeof(signed long));
    printf("size of signed long int: %zu\n", sizeof(signed long int));
    printf("size of unsigned long: %zu\n", sizeof(unsigned long));
    printf("size of unsigned long int: %zu\n", sizeof(unsigned long int));
    printf("size of long long: %zu\n", sizeof(long long));
    printf("size of long long int: %zu\n", sizeof(long long int));
    printf("size of signed long long: %zu\n", sizeof(signed long long));
    printf("size of signed long long int: %zu\n", sizeof(signed long long int));
    printf("size of unsigned long long: %zu\n", sizeof(unsigned long long));
    printf("size of unsigned long long int: %zu\n", sizeof(unsigned long long int));
    printf("size of double: %zu\n", sizeof(double));
    printf("size of long double::::::::::::::::::::::::::::::::::::::::::: very very very long %zu\n", sizeof(long double));
    return 0;
}