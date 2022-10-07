#ifndef MAIN_H
#define MAIN_H
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
int _putchar(char c);
void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
#endif
