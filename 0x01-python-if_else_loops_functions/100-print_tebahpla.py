#!/usr/bin/python
""""Print the alphabet in reverse order alternating upper- and lower-case."""
for i in range(ord('z'), ord('A') - 1, -1):
    print(chr(i), end='')
