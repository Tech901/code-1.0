# Intro to Programming / Python

Much of this can be covered in guided, exploratory programming (e.g. in the python shell)

## Linux:

- What is the command line?
- What is the editor?
- What is the python shell?


## CS50 IDE Setup:

- Running from the python shell
- Running python from a file / module.

## Day one Topics: Guided programming / workshop

- Variables and assignment.
- Arithmetic
- Comparison operators
- Data Types:
    - Integers, floats, strings, boolean. (hint at objects), None
    - Show errors when trying to perform operations of incompatible types
    - e.g. arithmetic w/ strings
    - String Operators
- Misc built-in functions: sum, min, max, len, etc.
- if / elif / else
- while loops
- for loops (a little)
- HOMEWORK assignment 1


## Day 2

Setup part 2:

- `pip install ipython`
- explain the difference between this and the python shell.
- point at the `.python_history` file. (for anyone that lost their python shell history.)


## Day two topics

- Lists / Strings continued...
    - methods
    - built-in functions: len, sorted, list()
- Functions (builtins)
    - type functions: type, int, float, str, list
    - collection functions: len, sum, max, min,
    - others: chr, ord,
    - methods on strings?
- Functions (our own) / input output
- Modules: Running code from a file. (all above is in the python shell)
    - collections
    - datetime, calendar
    - random

## Day three

- Explain command-line programs / inputs / `sys.argv`
    - particularly converting numeric input to integers using `int()`
- Build a grocery list app for the command line; Feature set:
    - add items to a list
    - remove items from a list
    - print the list
    - keep the list sorted / sort before printing
    - A repeating menu (good use-case for a `while` loop)
    - Stretch goal: saving to / loading from a file


### Day 3: Stretch Goals

If time allows, do a *gentle* introduction to C; Ideas here include:

1. A "hello world" example; point out:
    - the process of compilig and how it's different
    - the usage of the `printf` function and how it differs from python's `print`
    - the `main` function: All C programs need one of these.
2. A `counter.c` program; Count to 10 using a while loop / for loop.
    - importance of _declaring_ a variable and it's data type.

