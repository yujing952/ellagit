#!/usr/bin/python3

class MyNumber:
    def __iter__(self):
        self.var = 1
        return self

    def __next__(self):
        if self.var <= 20:
            nxt = self.var
            self.var += 1
            return nxt
        else:
            raise StopIteration


mynum = MyNumber()
myit = iter(mynum)

print(myit)
for x in myit:
    print(x, end=' ')

