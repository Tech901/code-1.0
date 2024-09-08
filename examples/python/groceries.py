# Build a grocery list.
# Features: add, update, remove, sort (when printing), save/load from a file.

items = []  # Global list of groceries.


def add_item(item):
    items.append(item)
    print(f"Added {item}")


def remove_item(item):
    items.remove(item)
    print(f"Removed {item}")


def load_from_file(filename):
    """Assume the data in the given filename is a comma-separted
    list of grocery items."""
    global items  # note: required because we're over-writing a global variable.
    with open(filename) as f:
        items = f.read().strip().split(",")
        print(f"Loaded {len(items)} from {filename}")


def save_to_file(filename):
    with open("filename", "w") as f:
        f.write(",".join(items))
        print(f"Saved {len(items)} items to {filename}.")


def print_list():
    for item in sorted(items):  # NOTE: Will alwyas print a sorted list
        print(f"- {item}")


def menu():
    print("A. Add an item")
    print("B. Remove an item")
    print("C. Exit")
    return input("Choice: ")


# main loop
load_from_file("groceries.txt")  # NOTE: this *must* exist first.
print_list()
option = menu()
while option != 'C':
    if option == "A":
        item = input("What do you want to add? ")
        add_item(item)
        save_to_file("groceries.txt")  # Save anytime we update the list
    elif option == "B":
        item = input("What do you want to remove? ")
        remove_item(item)
    print_list()

    option = menu()
