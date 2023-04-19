#ifndef CALC_H
#define CALC_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - The Struct op.
 *
 * @op: The operator.
 * @f: Corrsponding function.
 */
typedef struct op
{
	char *op;
	int (*f)(int m, int n);
} op_t;

int op_add(int m, int n);
int op_sub(int m, int n);
int op_mul(int m, int n);
int op_div(int m, int n);
int op_mod(int m, int n);
int (*get_op_func(char *s))(int, int);

#endif
