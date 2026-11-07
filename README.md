# Clever Average Calculator
This is a program that uses pointer-returning functions, dynamically allocated memory, and modular development. Composed of 6 functions, with primary focus on Pointers.

- ``main`` function does *not* interact with the user. It only creates variables, calls each function, and deletes the array at the end.
- ``get_size`` asks the user for the size of an array, and uses **input validation**.
- ``make_array`` uses an argument to dynamically allocate an array of integers. It returns a pointer, which points to the dynamically allocated array.
- ``set_scores`` (could have called it ``get_scores`` instead): this function uses a loop controlled by a ``size`` argument to prompt the user to enter a score.
- ``find_average`` accepts an array of integers and the size, calculates the average, and returns it. It **doesn't** interact with the user.
- ``print`` accepts an array of integers and the size, and uses a loop to display the contents. It will call the function `find_average` and pass it the arguments. It then displays the average, and formats it to <u>two decimal places of precision</u>.
