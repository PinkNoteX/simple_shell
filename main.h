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

void free_array(char **array, int arraysize);
char *userin();
void cmdexc(char **av, char *actcmdd, char **env,char *enterpath, int counter);
void Path_Tokenizer(char *string2, char **sarray2);
char *cmdchecker(char **array, char *cmd);
void chcmd(char **av, char *actcmdd,char **env,char *enterpath, int counter);
char **commentche(char **av);
void echocheck(char **av);
void removeChar(char *str, char garbage1, char garbage2);
char **spilt(char *string, char *sep, int *sep_count);
void removefirstspace(char *str);
#endif

