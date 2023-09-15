#include "main.h"

void Path_Tokenizer(char *string2, char **sarray2)
{
        int i2 = 0, j2 = 0, n2 = 0;
        char word2[150];
        char *s2[30], *car = "/";
        int k2 = 0;
        int r2 = 0;

        while (string2[i2] != '\0')
{

        if (string2[i2] == ':')
{
        word2[j2++] = '/';
        word2[j2] = '\0';

        s2[n2] = malloc(sizeof(word2));
        strcpy(s2[n2], word2);
                j2 = 0;
                n2++;
                memset(word2, 0, sizeof(word2));
}
        else
{
                word2[j2++] = string2[i2];
}
        i2++;
}
        s2[n2] = malloc(sizeof(word2));
         if (n2 == 0)
        {
                word2[j2++] = '/';
                word2[j2] = '\0';
                strcpy(s2[n2], word2);}
        else
        {
            strcpy(s2[n2], word2);
            strcat(s2[n2],car);}
        for (r2 = n2 + 1; r2 < 30; r2++)
{
        s2[r2] = '\0';
}
        for (k2 = 0; k2 < 30; k2++)
{
        sarray2[k2] = s2[k2];
}
}
char **spilt(char *string, char *sep, int *sep_count)
{
int len = strlen(string);
int ind = 0;
*sep_count = 0;
char* seperators = malloc(strlen(sep) + 1);
strcpy(seperators, sep);
int i = 0;
char **strings = malloc(100 * sizeof(char *));
i = 0;
char buf[17999];
int n = 0;
while (i < len)
{
    while (i < len)
    {

        if (strchr(seperators,string[i]) == NULL)
            break;
        i++;
    }

   int l = 0;
   while (i < len)
   {
    if (strchr(seperators,string[i]) != NULL)
    break;
    buf[l] = string[i];
    i++;
    l++;
   } 
   if(l > 0)
   {
   buf[l] = '\0';
   int allocation_size = sizeof(char) * (strlen(buf) + 1);
   strings[n] = malloc(allocation_size);
   strcpy(strings[n], buf);
   if(n != 0)
    if(strcmp(strings[n-1],"echo") == 0 || 
    strcmp(strings[n-1],"/bin/echo") == 0)
    {
    seperators = malloc(sizeof(char) * 2);
    strcpy(seperators, "");
    ind = n;
    }
   n++;
   }
}
strings[n] = NULL;
return (strings);
}

