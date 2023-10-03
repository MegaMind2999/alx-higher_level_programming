#!/usr/bin/python3
def magic_calculation(a, b, c):
    """Match bytecode in task 16"""
    if a < b:
        return (c)
    if c > b:
        return (a + b)
    return (b*a - c)
