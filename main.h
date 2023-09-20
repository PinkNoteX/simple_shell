#ifndef _MAIN_H_
#define _MAIN_H_
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <strings.h>
#include <errno.h>
#include <stdbool.h>
#include <stdarg.h>


extern char **environ;

/*Helper Functions*/
int _strcmp(char *str1, char *str2);

char *_strcpy(char *dest, const char *source);

void _strcat(char *s1, const char *s2);

char *_getenv(const char *name);

size_t _strlen(const char *str);

int _strncmp(const char *s1, const char *s2, size_t n);

char *_strchr(const char *str, int c);

void *_memset(void *ptr, int value, size_t num);

/*Command Interpreter Functions*/

void free_array(char **array, int arraysize);

char *userin(int exitval, char *userinput, char **Paths,
char **av, char __attribute__((unused)) *actcmd, int az);

void cmdexc(char **av, char *actcmdd, char **env,
char *enterpath, int counter, int exitpipe[2]);

void Path_Tokenizer(char *string2, char **sarray2);

char *cmdchecker(char **array, char *cmd, int *exitstatus);

void chcmd(char **av, char *actcmdd, char **env,
char *enterpath, int counter, int exitpipe[2]);

char **commentche(char **av);

void echocheck(char **av);

void removeChar(char *str, char garbage1, char garbage2);

char **split(char *string, char *sep, int *sep_count);

void removefirstspace(char *str);


int exithandler(char **av, int exitval, char *enterpath, int exitbool,
int counter, char **Paths, char *userinput, char *actcmd, int az);

int piped(int pipefd[], int waitstatus, char **av, int exitval);

void free_helper(char *userinput, char **Paths, char **av, char *actcmd, int az);

void free_helperexc(char *userinput, char **Paths, char **av, char *actcmd, int az);

void free_arrayex(char **array, int arraysize);
#endif
