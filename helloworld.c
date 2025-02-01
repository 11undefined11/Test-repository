#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
    printf("size of int %d, limits of int; max: %d; min: %d \n", sizeof(int), INT_MIN, INT_MIN, '\n');
    printf("size of float %d, max: %d, min: %d \n", sizeof(float), FLT_MAX, FLT_MIN);
    printf("size of char %d; limits of char; max: %d; min: %d \n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("size of signed char %d \n", sizeof(signed char), '\n');
    printf("size of unsigned char %d \n", sizeof(unsigned char), '\n');
    printf("size of short %d \n", sizeof(short), '\n');
    printf("size of short %d \n", sizeof(short), '\n');
    printf("size of signed short %d \n", sizeof(signed short), '\n');
    printf("size of signed short int %d \n", sizeof(signed short int), '\n');
    printf("size of signed %d \n", sizeof(signed), '\n');
    printf("size of signed int %d \n", sizeof(signed int), '\n');
    printf("size of unsigned %d \n", sizeof(unsigned), '\n');
    printf("size of unsigned int %d \n", sizeof(unsigned int), '\n');
    printf("size of long %d \n", sizeof(long), '\n');
    printf("size of long int %d \n", sizeof(long int), '\n');
    printf("size of signed long %d \n", sizeof(signed long), '\n');
    printf("size of signed long int %d \n", sizeof(signed long int), '\n');
    printf("size of unsigned long %d \n", sizeof(unsigned long), '\n');
    printf("size of unsigned long int %d \n", sizeof(unsigned long int), '\n');
    printf("size of long long %d \n", sizeof(long long), '\n');
    printf("size of long long int %d \n", sizeof(long long int), '\n');
    printf("size of signed long long %d \n", sizeof(signed long long), '\n');
    printf("size of signed long long int %d \n", sizeof(signed long long int), '\n');
    printf("size of unsigned long long %d \n", sizeof(unsigned long long), '\n');
    printf("size of unsigned long long int %d \n", sizeof(unsigned long long int), '\n');
    printf("size of double %d \n", sizeof(double), '\n');
    printf("size of long double %d \n", sizeof(long double), '\n');
    return 0;
}