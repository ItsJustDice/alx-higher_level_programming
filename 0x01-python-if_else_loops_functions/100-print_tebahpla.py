#!/usr/bin/python
j = 0
for b in range(ord('z'), ord('a') - 1, -1):
    print("{}".format(chr(b - j)), end="")
    j = 32 if j == 0 else 0
