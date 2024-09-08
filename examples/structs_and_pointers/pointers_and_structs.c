/*
 * This example illustrates structs & pointers to structs!
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Person {
    char *name;
    int age;
} Person;

int main()
{
    Person p;
    p.name = "brad";
    p.age = 12;

    printf("Name (p.name): %s\n", p.name);
    printf("Age  (p.age) : %i\n", p.age);

    Person *x = &p;

    printf("But x is a pointer to the Person as well!\n");
    printf("x->name: %s\n", x->name);
    printf("x->age:  %i\n", x->age);

    // But we can chnage the person thru the pointer, too!
    x->age = 100;
    printf("Name (p.name): %s\n", p.name);
    printf("Age (p.age):  %i\n", p.age);

    printf("x's address is: %p\n", x);
    printf("p's address is: %p\n", &p);

    // Just illustrating that we have one other variable
    // containing a Person type.
    Person o;
    o.name = "Ophelia";
    o.age = 35;

    printf("Name (o.name): %s\n", o.name);
    printf("Age (o.age):  %i\n", o.age);
    printf("o's address is: %p\n", &o);

    return 0;
}