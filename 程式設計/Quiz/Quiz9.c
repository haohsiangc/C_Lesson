#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int wordCount(char str[]);
int main(int argc, char *argv[])
{
    FILE *fptr;
    char *tempStr;
    int wc = 0, i;
    for (i = 1; i < argc; i++)
    {
        if ((fptr = fopen(argv[i], "r")) == NULL)
            printf("Error, the file %s is not opened!\n", argv[i]);
        else
        {
            wc = 0;
            while (fgets(tempStr, 1000, fptr))
            {
                wc = wc + wordCount(tempStr);
            }
            printf("File %s has %d words.\n", argv[i], wc);
            fclose(fptr);
        }
    }
    return 0;
}
int wordCount(char str[])
{
    int wc = 0, i;
    int isWord = 0;
    while (str[i] != '\0')
    {
        if (isalpha(str[i]) && isWord == 0)
        {
            isWord = 1;
            wc++;
        }
        else
        {
            if (isspace(str[i]))
            {
                isWord = 0;
            }
        }
        i++;
    }
    return (wc);
}