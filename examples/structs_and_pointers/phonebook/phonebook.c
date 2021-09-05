/** An example program that prompts a
 * user for their name & phone number,
 * then appends that information to a file.
 */
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE* file = fopen("phonebook.csv", "a");
    if (file == NULL)
    {
        printf("Unable to open the file\n");
        return 1;
    }

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file, "%s,%s\n", name, number);
    fclose(file); // always close your file
}