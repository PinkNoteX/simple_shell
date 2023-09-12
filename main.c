#include "main.h"

int main(int ac, char **av, char **env)
{
        char *userinput, *Path_string, *cmd = ":) ",
             **sarray = malloc(25 * sizeof(char *)), *end,
             **Paths = malloc(30 * sizeof(char *)), *actualcommand;
        int i = 0,  arraysize = 0, counter = 0, validpath = 0;
        long int exitvalue = 0;
        pid_t pid;


        while (1)
        {
                printf("%s", cmd);
                userinput = userin();
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
        Path_string = getenv("PATH");
        Path_Tokenizer(Path_string,Paths);
        actualcommand = cmdchecker(Paths,av[0]);
        if(strcmp(av[0], "exit") == 0)
        {
            if(av[1] != NULL)
            {
            exitvalue = strtol(av[1], &end, 10);;
            if (end == av[1] || *end != '\0' || errno == ERANGE)
              printf(":( Error: Enter a value after exit\n");
            else
            exit (exitvalue);}
            else
            exit (0);}
        else
        {
        pid = fork();
        if (pid == 0)
        chcmd(av,actualcommand,env);
        wait(NULL);
        free(actualcommand);
        counter++;}}
        free_array(Paths, 30);
        free_array(sarray, 25);
        free_array(av, arraysize);
        free(userinput);
        free(Path_string);
        return (0);
}
