#!/usr/bin/python3
def no_c(my_string):
    my_string = list(my_string)
    my_string = [i for i in my_string if i not in ('c', 'C')]
    return ''.join(my_string)
