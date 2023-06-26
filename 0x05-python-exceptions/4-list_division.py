#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    n_list = []
    matrix = 0
    if list_length <= 0:
        print("out of range")
        return n_list
    while matrix < list_length:
        try:
            n_list.append(my_list_1[matrix] / my_list_2[matrix])
        except ZeroDivisionError:
            print("division by 0")
            n_list.append(0)
        except TypeError:
            print("wrong type")
            n_list.append(0)
        except IndexError:
            print("out of range")
            n_list.append(0)
        finally:
            matrix += 1
    return n_list
