#! /usr/bin/python3
import copy

def noDupliteList(items):
    no_dup_items = []
    setlist = set()
    for item in items:
        if item not in setlist:
            no_dup_items.append(item)
            setlist.add(item)
    return no_dup_items


class PrototypeMeta(type):
    """实现原型模式的元类"""
    def __init__(cls, *args, **kwargs):
        super().__init__(*args, **kwargs)
        # 为对象绑定clone方法来实现对象拷贝
        cls.clone = (lambda self, is_deep=True: copy.deepcopy(self) if is_deep else copy.copy(self))


class Person(metaclass=PrototypeMeta):
    pass


class Fib(object):
    def __init__(self, num):
        self.num = num
        self.a, self.b = 0, 1
        self.idx = 0

    def __iter__(self):
        return self

    def __next__(self):
        if self.idx < self.num:
            self.a, self.b = self.b , self.a + self.b
            self.idx += 1
            return self.a
        raise StopIteration()


def fib(num):
    a, b = 0, 1
    for x in range(num):
        a, b = b, a + b
        yield a




if __name__ == "__main__":
    print('-------1--------')
    list1 = [9,11,2,3,1,2,3,4,6,7]
    list2 = noDupliteList(list1)
    print(list2)

    print('-------2--------')
    p1 = Person()
    p2 = p1.clone()                 # 深拷贝
    p3 = p1.clone(is_deep=False)    # 浅拷贝

    print('-------3--------')
    fib_obj = Fib(10)

    print(fib_obj.__next__())
    list0 = []
    list0.append(next(fib(10)))
    print(list0)


