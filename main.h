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

void tokeniser(char *string, char **sarray);
void free_array(char **array, int arraysize);
char *userin();
void cmdexc(char **av, char *actcmdd);
void Path_Tokenizer(char *string2, char **sarray2);
char *cmdchecker(char **array, char *cmd);
void chcmd(char **av, char *actcmdd,char **env);
char **commentche(char **av);
#endif


