#!/usr/bin/python3
def square_matrix_map(matrix=[]):
    return list(map((lambda leap: list(map((lambda x: x * x), leap))), matrix))
