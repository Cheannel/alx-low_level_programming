#ifndef CALC_H
#define CALC_H

/**
 * filename: 3-calc.h
 * description: a header file containing prototypes
 */
int op_add(int a, int b);
int (*get_op_func(char *s))(int, int);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);


#endif
