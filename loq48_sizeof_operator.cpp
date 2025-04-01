#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
int main()
{
    // implement of sizeof operator
    // printf("size of signed int is %d bytes\nsize of float is %d bytes\nsize of character is %d bytes\nsize of double is %d bytes\nsize of unsigned integer is %d bytes\nsize of long double is %d bytes\nsize of bool is %d bytes",sizeof(signed int),sizeof(float),sizeof(char),sizeof(double),sizeof(unsigned int),sizeof(long double),sizeof(bool));
    printf("\nsizeof int  %d:", sizeof(int));
    printf("\nsizeof float %d:", sizeof(float));
    printf("\nsizeof  long:%d", sizeof(long));
    printf("\nsizeof  char:%d", sizeof(char));
    printf("\nsizeof  double:%d", sizeof(double));
    printf("\nsizeof  long int:%d", sizeof(long int));
    // printf("\nsizeof  long float:%d", sizeof(long float)); long float is nothing 
    printf("\nsizeof  long double:%d", sizeof(long double));
    printf("\nsizeof  long long:%d", sizeof(long long));
    printf("\nsizeof  long long int:%d", sizeof(long long int));
    printf("\nsizeof  short int :%d", sizeof(short int));


    printf("\n\nsizeof unsigned int  %u:", sizeof(unsigned int));
    // printf("\nsizeof unsigned float %d:", sizeof(unsigned float)); unsigned float is nothing 
    printf("\nsizeof  unsigned long:%lu", sizeof(unsigned long));
    printf("\nsizeof  unsigned char:%u", sizeof(unsigned char));
    // printf("\nsizeof  unsigned double:%d", sizeof(unsigned double)); unsigned double is nothing 
    printf("\nsizeof  unsigned long int:%u", sizeof(unsigned long int));
    // printf("\nsizeof  unsigned long double:%d", sizeof(long unsigned double)); long unsigned double is nothing 
    printf("\nsizeof  unsigned long long:%u", sizeof(unsigned long long));
    printf("\nsizeof  unsigned long long int:%u", sizeof(unsigned long long int));
    printf("\nsizeof  unsigned short int :%u", sizeof( unsigned short int));

    /*
    format specifier:
unsigned int: %u

unsigned short int: %hu

unsigned long int: %lu

unsigned long long int: %llu
    */

    getch();
    return 0;
}