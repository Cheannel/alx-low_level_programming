#ifndef MAIN_H
#define MAIN_H


/**
 * filename: main.h
 * description: this is a header file that contains the prototypes of all the functions used in this project(0x0B-malloc_free).
 */


char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);


#endif
