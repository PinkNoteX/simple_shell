#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <strings.h>

void tokeniser(char *string, char **sarray)
{
    int i = 0, j = 0, n = 0;
    char word[20];
    char *s[30];

    while (string[i] != '\0')
    {
        if (string[i] == ' ')
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
        strcpy(s[n], word);
        
        for (int i = 0; i < 30; i++)
        {
          sarray[i] = s[i];
        }
        
}
int main(void)
{
  char token[] = "this is a big string";
  char *sarray[30];
  tokeniser(token,sarray);
  for(int i = 0; i < 30; i++)
  {
    printf("%s\n", sarray[i]);
  }

  for (int i = 0; i < 30; i++)
  {
	  free(sarray[i]);
  }
}

