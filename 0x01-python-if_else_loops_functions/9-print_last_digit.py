#!/usr/bin/python3
def print_last_digit(number):
    """printing the last digit."""
    num = abs(number) % 10
    print(num, end="")
    return (num)
