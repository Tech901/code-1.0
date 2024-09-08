/**
 * This example code shows you one way that structs
 * can be used to organize multiple pieces of
 * information about a single entity.
 */
#include <stdio.h>
#include <cs50.h>

// This struct defines a city, which has a
// name, state, and some lat/long coordinates.
typedef struct City { // This creates a "struct city"...
    string name;
    string state;
    float latitude;
    float longitude;
} City; // But we use typedef to create a "City" type.
// Read the discussion here to learn more:
// https://stackoverflow.com/a/1675446/182778

// Here's a function prototype that returns a City.
City getCity();

int main() {

    // We can now define a variable that contains all the
    // information for a city. The four pieces of data
    // describing the city are accessible at a single
    // variable name.
    City mem;
    mem.name = "Memphis";
    mem.state = "TN";
    mem.latitude = 35.117;
    mem.longitude = -89.969;

    // You can use the dot notation (e.g. "mem.name") to
    // access a single part of a city.
    printf("%s, %s is at (%f, %f)\n\n",
        mem.name, mem.state, mem.latitude, mem.longitude);

    // Here's an alternative syntax for initializing a struct.
    City nash = { .name = "Nashville", .state = "TN", .latitude = 36.186, .longitude = -87.065};
    City knox = { .name = "Knoxville", .state = "TN", .latitude = 35.958, .longitude = -84.065};

    // Structs are nice when we need to do something with a
    // collection of complext data. Here's an array of cities:
    int num_cities = 3;
    City cities[3] = {mem, nash, knox};

    for(int i=0; i < num_cities; i++) {
        printf("%s, %s is at (%f, %f)\n",
            cities[i].name,
            cities[i].state,
            cities[i].latitude,
            cities[i].longitude);
    }

    // A function can typically only return a single value,
    // but structs give us a way for a function to return
    // something that contains multiple values.
    City x = getCity();
    printf("%s, %s is at (%f, %f)\n\n",
        x.name, x.state, x.latitude, x.longitude);

    return 0;
}

// Here's a function that returns a city.
City getCity() {
    // Imagine if this function read these details from a file
    // or from a Database... We can return all the data for
    // a city as a single variable.
    City c = { .name = "New York", .state = "NY", .latitude = 40.697, .longitude = -74.259};
    return c;
}
