#ifndef MAIN_H
#define MAIN_H

/**
 * filename - main.h
 * desc: this is a header file containing the prototypes of all the functions
 * used in this project
 */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int _putchar(char c);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);


#endif
