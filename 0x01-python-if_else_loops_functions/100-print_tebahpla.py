#!/usr/bin/python
""""Print the alphabet in reverse order alternating upper- and lower-case."""
for i in range(ord('z'), ord('A') - 1, -1):
    if i % 2 == 0:
        difference = 0
    else:
        difference = 32
    print('{}'.format(chr(i - difference)), end='')
