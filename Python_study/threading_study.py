#!/usr/bin/python3

import _thread
import time


# define a function for threading
def print_time(thread_name, delay):
    count = 0
    while count < 5:
        time.sleep(delay)
        count += 1
        print("%s: %s" % (thread_name, time.ctime(time.time())))


# create 2 threading
try:
    _thread.start_new_thread(print_time, ("Thread-1", 2))
    _thread.start_new_thread(print_time, ("Thread-2", 4))
except:
    print('Error: cannot launch the threading')

while 1:
    pass
