#!/usr/bin/python3
def magic_calculation(a, b):
    matrix = 0
    for i in range(1, 3):
        try:
            if i > a:
                raise Exception('Too far')
            else:
                matrix += (a ** b) / i
        except Exception:
            matrix = b + a
            break
    return (matrix)
