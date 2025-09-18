/**
 * Can we print pretty, colorful output using functions? Yes!
 *
 * Disclaimer: This has as few bits of more _advanced_ code.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>

// Define our function prototypes (aka headers, function signatures)
// return_type function_name(input_type var1)
string make_red(string text);
string make_yellow(string text);
string make_green(string text);
string make_blue(string text);

int main(void) {

    string message = make_red("Hello World");
    printf("%s\n", message);

    string message2 = make_blue(get_string("Blue message? "));
    printf("%s\n", message2);

    string message3 = make_green(get_string("Green message? "));
    printf("%s\n", message3);
}


string make_red(string text)
{
    string output = malloc(sizeof(char) * 128);
    sprintf(output, "\e[31m%s\e[0m", text);
    return output;
}

string make_yellow(string text)
{
    string output = malloc(sizeof(char) * 128);
    sprintf(output, "\e[33m%s\e[0m", text);
    return output;
}

string make_green(string text)
{
    string output = malloc(sizeof(char) * 128);
    sprintf(output, "\e[32m%s\e[0m", text);
    return output;
}

string make_blue(string text)
{
    string output = malloc(sizeof(char) * 128);
    sprintf(output, "\e[34m%s\e[0m", text);
    return output;
}

