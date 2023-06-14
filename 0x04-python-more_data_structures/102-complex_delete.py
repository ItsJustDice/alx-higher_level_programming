#!/usr/bin/python3
def complex_delete(a_dict, value):
    del_key = []
    for key, key_value in a_dict.items():
        if key_value is value:
            del_key.append(key)
    for i in del_key:
        del a_dict[i]
    return(a_dict)
