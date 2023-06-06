#!/usr/bin/python3
"""Print the numbers from 1 to 100 separated by a space.
For multiples of three, print Fizz instead of the number
For multiples of five, print Buzz instead of the number.
For multiples of three and five, print FizzBuzz instead of the number.
"""


def fizzbuzz():
    for num in range(1, 101):
        if num % 3 == 0 and num % 5 == 0:
            print("fizzbuzz ", end="")
        elif num % 3 == 0:
            print("Fizz ", end="")
        elif num % 5 == 0:
            print("Buzz ", end="")
        else:
            print("{}".format(num), end="")
