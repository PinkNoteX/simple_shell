#include "main.h"

int main(int ac, char **av, char **env)
{
        char *userinput, *Path_string, *cmd = ":) ",
             **sarray = malloc(25 * sizeof(char *)), *end,
             **Paths = malloc(30 * sizeof(char *)), *actualcommand;
        int i = 0,  arraysize = 0, counter = 0, exitvalue = 0;
        pid_t pid;
        bool piped = false;
        (void)ac;


        while (1 && !piped)
        {
            if(isatty(STDIN_FILENO) == 0)
             piped = true;
             else{
                write(STDOUT_FILENO, cmd, 3);}
                userinput = userin();
        if(strcmp(userinput, "$()^($)!$($)$!") != 0 
        && strcmp(userinput, " ") != 0){
                tokeniser(userinput, sarray);
                for (i = 0; sarray[i] != NULL; i++)
                {
                        arraysize = i + 2; }
                i = 0;
                av = malloc(sizeof(char *) * arraysize);
                while (sarray[i] != NULL)
                {
                        av[i] = sarray[i];
                        i++; }
                av[i] = sarray[i];
        echocheck(av);
        Path_string = getenv("PATH");
        Path_Tokenizer(Path_string,Paths);
        av = commentche(av);
        
        if(strcmp(av[0], "exit") == 0)
        {
            if(av[1] != NULL)
            {
            exitvalue = strtol(av[1], &end, 10);;

            if (end == av[1] || *end != '\0' || errno == ERANGE)
            {
                perror(":( Error:\n");
            }
            else
            exit (exitvalue);
            }
            else
            exit (errno);
        }
        else
        {
        pid = fork();
        if (pid == 0)
        {
        actualcommand = cmdchecker(Paths,av[0]);
        chcmd(av,actualcommand,env);
        }
        wait(NULL);
        counter++;
        }}}
        free_array(Paths, 30);
        free(userinput);
        free_array(sarray, 25);       
        
        return (0);
}
