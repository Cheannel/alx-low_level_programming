#ifndef MAIN_H
#define MAIN_H

/**
 * file: main.h
 * description: a header file containing all the prototypes used in the project(0x06-pointers_arrays_strings)
 */


char *_strcat(char *dest, char *src);
int _putchar(char c);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strmp(char *s1, char *s2);
void reverse_array(int *n, int a);
char *string_toupper(char *);
char *cap_string(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);



#endif
