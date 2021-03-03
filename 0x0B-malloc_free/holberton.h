#ifndef HOLBERTON_H
#define HOLBERTON_H

char *create_array(unsigned int n, char c);
char *_strdup(char *og);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
