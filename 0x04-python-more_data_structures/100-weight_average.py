#!/usr/bin/python3
def weight_average(my_list=[]):
    if my_list and len(my_list):
        len1 = 0
        len2 = 0
        for rep in my_list:
            len1 += (rep[0] * rep[1])
            len2 += (rep[1])
        return (len1/len2)
    return 0
