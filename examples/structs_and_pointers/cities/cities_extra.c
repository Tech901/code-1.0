/**
 * An EXPANDED VERSION of cities.c.
 *
 *
 */
#include <stdio.h>
#include <cs50.h>

// This struct defines a city, which has a
// name, state, and some lat/long coordinates.
typedef struct city { // This creates a "struct city"...
    string name;
    string state;
    float latitude;
    float longitude;
} City; // But we use typedef to create a "City" type.
// Read the discussion here to learn more:
// https://stackoverflow.com/a/1675446/182778

// Here's a function prototype that returns a City.
City getCity();

// Here's a function prototype for a function that
// prints an array of Cities.
void printCities(City cities[], int num_cities);


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
    int num_cities = 5;
    City cities[5] = {mem, nash, knox};

    // A function can typically only return a single value,
    // but structs give us a way for a function to return
    // something that contains multiple values.
    printf("Enter your favoite city\n");
    cities[3] = getCity();
    printf("Enter the worst city\n");
    cities[4] = getCity();

    // Print the cities
    printCities(cities, num_cities);

    return 0;
} // end of main

void printCities(City cities[], int num_cities) {
    // Print all of the cities.
    for(int i=0; i < num_cities; i++) {
        printf("%s, %s is at (%f, %f)\n",
            cities[i].name,
            cities[i].state,
            cities[i].latitude,
            cities[i].longitude);
    }
}


// Here's a function that returns a city.
City getCity() {
    // Imagine if this function read these details from a file
    // or from a Database... We can return all the data for
    // a city as a single variable.

    // A simple example would create a city and return it.
    /*
    City c = { .name = "New York", .state = "NY", .latitude = 40.697, .longitude = -74.259};
    return c;
    */

    // OR, we can prompt the user to enter the City's details:
    City c;
    c.name = get_string("Enter a City name: ");
    c.state = get_string("Enter a State: ");
    c.latitude = get_float("Lat: ");
    c.longitude = get_float("Lon: ");
    return c;
}
