#! /usr/bin/python3

print('---------send()--------')


def my_generator(n):
    for i in range(n):
        temp = yield i
        print('i am %s, transfer the args by send()' % temp)


"""
g = my_generator(5)
print(next(g))
print(next(g))
g.send(100)
print(next(g))
print(next(g))
"""

print('---------throw()--------')


def your_generator():
    while True:
        try:
            yield 'a'
            yield 'b'
            yield 'c'
            yield 'd'
            yield 'e'
        except ValueError:
            print("trigger ValueError")
        except TypeError:
            print("trigger TypeError")


g0 = your_generator()
print(next(g0))
print(next(g0))
print('--------')
print(g0.throw(ValueError))
print('--------')
print(next(g0))
print(next(g0))
print('--------')
print(g0.throw(TypeError))
print('--------')
print(next(g0))


print('----------return--------')
def g3():
    yield 'a'
    return 'this is error explanation'
    yield 'b'

g1 = g3()
try:
    next(g1)
    next(g1)
except StopIteration as exc:
    result = exc.value
    print(result)

