#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    matrix = 0
    while True:
        try:
            if matrix < x:
                print(my_list[matrix], end='')
                matrix += 1
            else:
                print()
                return matrix
        except IndexError:
            print()
            return matrix
