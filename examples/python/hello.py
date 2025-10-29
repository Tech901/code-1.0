"""
hello.py

This module introduces us to python! Here, we learn a bit
about the python basics:

- print
- capturing user input
- data types: int, float, string
- loops: for & while
- functions
- argv

You can also explore all these concepts in the Python REPL -- Read Evaluate Print Loop

To use the REPL, type `python` at the command line with no arguments.

"""

from sys import argv
from cs50 import get_string, get_int


def explore():
    # Printing some strings
    print("hello, world!")
    name = get_string("What is your name? ")
    print(f"hello, {name}")  # string interpolation.

    # Do some calculation
    x = get_int("x: ")
    y = get_int("y: ")

    #print(x + y)
    print(f"x/y = {x / y}")
    print(f"x*y = {x * y}")
    print(f"x^y = {x ** y}")  # p0w(x, y) or x to the yth power.

    # Capture user input & see what data type it is.
    data = input("Enter something: ")
    data_type = type(data)
    print(f"{data} is of type: {data_type}")

    # Let's make some decisions
    if x < y:
        print(f"{x} is the smaller number")
    elif y < x:
        print(f"{y} is the smaller number")
    else:
        print(f"{x} and {y} are the same!")

    # Do you agree?
    answer = get_string("Do you agree? ")
    # if answer == "Y" or answer == "y":
    #     print("Agreed.")
    # elif answer == "N" or answer == "n":
    #     print("Not agreed.")

    if answer.lower() in ["y", "yes", "yeah"]:
        print("Agreed.")
    elif answer.lower() in ["n", "no", "nah"]:
        print("Not agreed.")


    # Let's get loopy.
    # Count to 5 with a for-loop
    for i in range(5):
        print(f"- {i}")

    i = 4
    while i >= 0:
        print(f"- {i}")
        i -= 1  # i = i - 1

def meow(count):
    for i in range(count):
        print("meow 🐈")


def main():
    # In C we would have done this:
    # int main(int argc, char* argv[])
    #
    # In python, we do: from sys import argv
    print(argv)
    if len(argv) == 2:
        n = int(argv[1])
        meow(n)
    else:
        print("USAGE: python hello.py <n>")


main() # Call our main function
