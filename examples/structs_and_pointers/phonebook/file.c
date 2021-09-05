/** This program reads the content from data.txt, and plays around with fseek. */

#include <stdio.h>

int main(void)
{
    FILE* file = fopen("data.txt", "r");
    if (file == NULL)
    {
        printf("Unable to open the file\n");
        return 1;
    }
    // skip forward a bit in the file.
    //fseek(file, 15, SEEK_SET); // skip ahead 5 bytes from the beginning
    //fseek(file, -5 * sizeof(char), SEEK_END); // skip backward 5 bytes from the end

    char c; // Enough memory to store 1 character.
    int count = 0;
    while (fread(&c, sizeof(char), 1, file))
    {
        printf("%c", c);
        count++;

        if(count == 6) {
            fseek(file, -6 * sizeof(char), SEEK_CUR);
        }
    }

    fclose(file); // always close your file
}