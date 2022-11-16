#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

/* innitial size of buffer for user input*/ 
#define READ_BUF 1000

#define DELIM " \a\t\r\n "


/* shell utility function */
void ctrl_c(int);
char *_getline(void);
char **_strtok(char *, const char *);
int is_delimeter(const char *, char );
void shell_execute(char **);

/* helper function */
int print(char *, int);

/* string function */
int _strlen(char *);

/* shell memory management */

void *_realloc(void *, int, int);

#endif /* _SHELL_H */
