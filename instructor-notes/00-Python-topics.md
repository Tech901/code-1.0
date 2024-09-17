# Intro to Programming / Python

- Much of this will be covered in guided, exploratory programming.
- This content should prepare students for most of the [PCEP](https://pythoninstitute.org/certification/pcep-certification-entry-level/)
- Workflow for students:  Write code in the editor, run the python module in the terminal. 

## Linux + CS50 IDE Setup & Review

- What is the command line?
- What is the editor?
- How to run a python _script_.

### Basic bash commands

- `cd` -  to change directory
- `ls -alh` - to list files
- `pwd` - print working directory.
- `mkdir` - make a directory
- `touch <filename>` to create an empty file.

## Day one Topics: Guided programming / workshop

- Variables and assignment.
- Printing & variable interpolation
- Start pointing out Exceptions where applicable.
- Basic Arithmetic: `+`, `-`, `/`, `*`
- Comparison operators: `<`, `<=`, `>`, `>=`, `==`, `!=`
- Data Types: ([see the official docs](https://docs.python.org/3/library/stdtypes.html))
    - Numeric Types: `int`, `float`
    - Sequence Types: `list`, `tuple`, `range` 
        - Useful functions for sequences: (`len`, `sorted`, `reversed`)
        - Aggregate functions: `sum`, `min`, `max`
    - Text Sequences: `str`
    - Slicing.
    - Sets: `set`
    - The `None` type.
    - Show errors when trying to perform operations of incompatible types
    - e.g. arithmetic w/ strings
    - String Methods (`capitalize`, `lower`, `upper`, `isalpha`, `isnumeric`)
- The `help` function.
- Flow control (i.e. [compound statements](https://docs.python.org/3/reference/compound_stmts.html#))
    - `if`, `elif`, `else`
    - `while` loops
    - `for` loops (a little)
    - The `pass` keyword
    - `break`, `continue`, and the optional `else` block on `for` & `while` loops.
- HOMEWORK assignment 1

----

## Day 2

### Day two topics

- Review of items from Day 1.
- Functions:
    - Point out the type functions: `type`, `int`, `float`, `str`, `list`
    - Review collection functions: len, sum, max, min,
    - others from the challenge: `chr`, `ord`,
    - `input`
    - User-defined functions:
        - function name, paramters (positional v. keyword)
        - defaults using keywords parameters.
        - `return`
    - Assertions.

- Modules: 
    - What is a module (e.g. anything in a .py file)
    - Standard library modules
        - random
        - statistics
        - datetime, calendar
        - random

----

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
- If time allows:
    - [Bitwise operations](https://docs.python.org/3/library/stdtypes.html#bitwise-operations-on-integer-types)
    - The `bin` function
    - The `hex` function
    - The `int` function with `base`, e.g. `int("0xc", base=16)`


### Day 3: Stretch Goals

If time allows, do a *gentle* introduction to C; Ideas here include:

1. A "hello world" example; point out:
    - the process of compilig and how it's different
    - the usage of the `printf` function and how it differs from python's `print`
    - the `main` function: All C programs need one of these.
2. A `counter.c` program; Count to 10 using a while loop / for loop.
    - importance of _declaring_ a variable and it's data type.

