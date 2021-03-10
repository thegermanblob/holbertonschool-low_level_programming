#ifndef FUN_H
#define FUN_H

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, int size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif
