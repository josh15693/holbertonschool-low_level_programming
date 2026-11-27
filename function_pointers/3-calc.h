#ifndef _3_CALC
#define _3_CALC

typedef struct op
{
char *op;                  /* the operator string, e.g. "+" */
int (*f)(int a, int b);    /* the function, e.g. op_add */
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

int _putchar(char c);

#endif
