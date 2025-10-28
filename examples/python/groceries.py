# Build a grocery list
# Features: add, update, remove, sort (when printing), save/load from a file.

items = []  # Global list of groceries.


def add_item(item):
    items.append(item.lower())
    print(f"Added {item}")


def remove_item(item):
    # Look before you leap:
    if item in items:
        items.remove(item)
        print(f"Removed {item}")
    else:
        print(f"{item} was not on the list")


def load_from_file(filename):
    """Assume the data in the given filename is a
    comma-separated list of grocery items.

    This function will load those items into the global
    `items` list.
    """
    global items  # required because we are changing a global variable.
    with open(filename) as f:
        content = f.read()
        items = content.strip().split(",")
        print(f"Loaded {len(items)} from {filename}.")


def save_to_file(filename):
    with open(filename, "w") as f:
        content = ",".join(items)
        f.write(content)
        print(f"Wrote {len(items)} items to {filename}.")


def print_list():
    print("-" * 40)
    for item in sorted(items):
        print(f" - {item}")
    print("-" * 40)


def menu():
    print("x" * 40)
    print("A. Add an item")
    print("B. Remove an item")
    print("C. Exit")
    print("x" * 40)
    return input("Choice: ")


def main():
    load_from_file("groceries.txt")
    print_list()
    option = menu()
    while option != "C":
        if option == "A":
            item = input("What do you want to add? ")
            add_item(item)
            save_to_file("groceries.txt")
        elif option == "B":
            item = input("What do you want to remove? ")
            remove_item(item)
            save_to_file("groceries.txt")
        print_list()

        option = menu()


main()
