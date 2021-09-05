"""
Organizing code: Using your own modules in python.

"""


#import maths  # Option 1... then you can call maths.add_these()
from maths import add_these  # Option 2: import add_these directly

result = add_these(3, 5)

print("Hello")
print(f"3 + 5 = {result}")
