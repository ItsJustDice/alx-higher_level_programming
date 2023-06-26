#!/usr/bin/python3
def safe_print_division(a, b):
    try:
        count = a / b
        print("Inside count: {:.1f}".format(count))
    except:
        count = None
        print("Inside count: {}".format(count))
    finally:
        return count
