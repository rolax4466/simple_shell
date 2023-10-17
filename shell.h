#ifndef SHELL_H

#define SHELL_H


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>




/***String manipulation functions***/
char *_strcat(char *dst, char *src);
int _strlen(const char *str);
int _strcmp(char *str1, char *str2);
int _atoi(char *str);
char *search(char *name);
char **parser(char *string, char *delim, int len);
char *add_path(char *p_name, char *program);
int execute(char *name, char **options);

char *_strdup(char *string);

void free_tok(char **tokns);
void free_getenv(char *env_path);
char *getenv(const char *format);
void exit_handler(char **tokns, char *line);
int count_dlms(char *s, char *del);
int input_count(char *string);
void printenv(void);
void help(void);
int BuiltinCommand(char **tokns, char *line);
int _strncmp(const char *str1, const char *str2, size_t lim);
void _puts(char *s);
int _putchar(char t);
void *_realloc(void *ptr, unsigned int old_s, unsigned int new_s);
char *new_line(char *string);
void sig_handler(int id);


extern char **environ;



#endif /*SHELL_H*/
