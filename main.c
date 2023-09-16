#include "main.h"

int main(int ac, char **av, char **env)
{
        char *userinput, *Path_string, *cmd = ":) ", *end,
             **Paths = malloc(30 * sizeof(char *)), *actualcommand,
             *enterpath;
        int i = 0,  arraysize = 100, counter = 1, exitvalue = 0,
        waitstatus = 0;
        pid_t pid;
        bool piped = false;
        (void)ac;

        enterpath = av[0];
        while (1 && !piped)
        {
            if(isatty(STDIN_FILENO) == 0)
             piped = false;
             else{
                write(STDOUT_FILENO, cmd, 3);}
                userinput = userin();
        if(strcmp(userinput, "$()^($)!$($)$!") != 0
        && strcmp(userinput, " ") != 0){
        av = spilt(userinput," ",&arraysize);
        if(av[0] != NULL){
        echocheck(av);
        Path_string = getenv("PATH");
       if(Path_string != NULL && Path_string != ""){
        Path_Tokenizer(Path_string,Paths);}
        else{
            Path_string = malloc(15);
            strcpy(Path_string, "/bin:/usr/bin");
            Path_Tokenizer(Path_string,Paths);
            free(Path_string);}
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
            exit (waitstatus);
        }
        else
        {
        actualcommand = cmdchecker(Paths,av[0]);
        if(actualcommand != NULL)
        pid = fork();
        if (pid == 0)
        {
        chcmd(av,actualcommand,env,enterpath,counter);
        }}
        
        wait(&waitstatus);
        waitstatus = WEXITSTATUS(waitstatus);
        counter++;
        }}}
        free_array(Paths, 30);
        free(userinput);
        free_array(av, arraysize);


        return (0);
}
