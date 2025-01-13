#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_str(char *word)
{
    for (int i = 0, j = strlen(word) - 1; i < j; i++, j--)
    {
        swap(&word[i], &word[j]);
    }
}

void show_str(char *word)
{
    int index = 0;
    while (word[index] != '\0')
    {
        printf("%c", word[index]);
        index++;
    }

    printf("\n");
}

int main()
{
    char word[] = "Maria Giovanna";
    reverse_str(word);
    show_str(word);
}