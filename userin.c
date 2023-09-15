#include "main.h"
char *userin()
{
        char *userin_s;
        size_t n = 0;
        ssize_t nchars;

        nchars = getline(&userin_s, &n, stdin);
        if (nchars == -1)
        {
                  if (feof(stdin)) 
        {
                if(isatty(STDIN_FILENO) == 0){
                free(userin_s);
                exit (0);    
                }
            clearerr(stdin);
            write(STDOUT_FILENO,"\n",1);
            exit (0);
        }
        else{
                if(isatty(STDIN_FILENO) == 0){
                free(userin_s);
                exit (0);    
                }
                free(userin_s);
                write(STDOUT_FILENO,"\n",1);
                exit (0);
        }}
        if ((userin_s)[nchars - 1] == '\n')
        {
        (userin_s)[nchars - 1] = '\0';
        --nchars;
        }
        if (nchars == 0)
        {
                strcpy(userin_s,"$()^($)!$($)$!");
                return(userin_s);
        }
        else
        return (userin_s);
}
