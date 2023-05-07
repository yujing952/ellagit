#! /usr/bin/python3

class TestIterator:
    value = 0
    def __next__(self):
        self.value += 1
        if self.value > 10: raise StopIteration
        return self.value

    def __iter__(self):
        return self


def flatten(nested):
    try:
        try: nested + ''
        except TypeError: pass
        else: raise TypeError
        for sublist in nested:
            for element in flatten(sublist):
                yield element
    except TypeError:
        yield nested


if __name__ == "__main__":
    ti = TestIterator()
    print(list(ti))

    print("--------nested---------")

    nestedList = [[1], [2,3], 4, [5,[6]], 7, [8,[9,[10]]]]

    for num in flatten(nestedList):
        print(num)
    print(list(flatten(nestedList)))
    nestedList2 = ['foo',['age',['bar'],'baz']]
    print(list(flatten(nestedList2)))
