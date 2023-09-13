#include "main.h"
char **commentche(char **av){
int i, comment_int, r;
bool comment = false;

while (av[i] != NULL)
{
    if(av[i][0] == '#')
    {
        comment_int = i;
        comment = true;
    }
    i++;
}
if(comment == true)
{
    r = comment_int;
    while (r < i + 1)
    {
        av[r] = '\0';
        r++;
    }
    return (av);
}
return (av);
}
