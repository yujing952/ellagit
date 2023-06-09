#!/usr/bin/python3
import time

for i in range(101):
    #print("\r{}%".format(i),end=' ')
    print('\r%d%%' % i, end=' ')
    time.sleep(0.05)
