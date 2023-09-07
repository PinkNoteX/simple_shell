#include "main.h"

void tokeniser(char *string, char **sarray)
{
    int i = 0, j = 0, n = 0;
    char word[20];
    char *s[15];
    int k = 0;
	int r = 0;
    while (string[i] != '\0')
    {
        if (string[i] == ' ')
        {
                word[j] = '\0';

                s[n] = malloc(sizeof(word));
		if (s[n] == NULL) 
            {
                printf("Error: Out of memory\n");
                exit(1);
            }
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
	 if (s[n] == NULL) 
    {
        printf("Error: Out of memory\n");
        exit(1);
    }
        strcpy(s[n], word);
        for (r = n + 1; r < 15; r++)
        {
          s[r] = '\0';
        } 
        for (k = 0; k < 15; k++)
        {
          sarray[k] = s[k];
        }
        
}
