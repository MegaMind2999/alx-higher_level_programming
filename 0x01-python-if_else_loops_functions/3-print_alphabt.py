#!/usr/bin/python3
for c in range(97, 123):
    lc = chr(c)
    if lc != 'q' and lc != 'e':
        print("{}".format(lc), end="")
