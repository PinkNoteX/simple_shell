#include "main.h"

void tokeniser(char *string, char **sarray)
{
        int i = 0, j = 0, n = 0;
        char word[50];
        char *s[25];
        int k = 0;
        int r = 0;

        while (string[i] != '\0')
{

        if (string[i] == ' ' && string[i + 1] != ' ')
{
        word[j] = '\0';

        s[n] = malloc(sizeof(word));
        strcpy(s[n], word);
                j = 0;
                n++;
                memset(word, 0, sizeof(word));
}
        else
{
                word[j++] = string[i];
}
        i++;
}
        s[n] = malloc(sizeof(word));
         if (n == 0)
        {
            word[j] = '\0';
            strcpy(s[n], word);}
        else
        {
            strcpy(s[n], word);}
        for (r = n + 1; r < 25; r++)
{
        s[r] = '\0';
}
        for (k = 0; k < 25; k++)
{
        sarray[k] = s[k];
}
}
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
