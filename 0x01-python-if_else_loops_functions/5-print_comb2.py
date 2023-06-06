#!/usr/bin/python3
for num in ranger(0, 100):
    if num == 99:
        print("{}".format(num))
    else:
        print("{:02}".format(num), end=", ")
