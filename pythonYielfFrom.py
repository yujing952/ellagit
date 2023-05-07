#!/usr/bin/python3

print("----------yield from 1------------")
def generator1():
    for i in range(10):
        yield i


# show: yield from
def generator2():
    yield 'a'
    yield 'b'
    yield 'c'
    yield from generator1()
    # for item in generator1():
    #     yield from
    yield from [11, 22, 33, 44]
    yield from(55, 66, 77)
    yield from range(3)


for i in generator2():
    print(i, end=' - ')


print("\n---------yield from 2------")

# using "yield from" to get "return value"


def my_generator3():
    for i in range(5):
        if i == 2:
            return "i am interrupted"
        else:
            yield i


# define a decorator, actually it's also a generator
def wrap_my_generator(generator):
    # automatically trigger StopIteration exception,
    # and assign "return value" to the result of  "yield from" expression
    result = yield from generator
    print(result)


# call main function, the called generator is not original
# generator but decorated generator
def main(generator):
    for i in generator:
        print(i)


g = my_generator3()
wrap_g = wrap_my_generator(g)
main(wrap_g)

print("-------------yield from 3----------")


def average():
    total = 0.0
    count = 0
    avg = None
    while True:
        n = yield avg   # avg value as the return of generator
        count += 1  # add 1 for each iteration
        total = total + n  # count the sum of transferred data
        avg = total / count


def wrap_average(generator):
    yield from generator


def main(wrap):
    print(next(wrap))
    print(wrap.send(10))
    print(wrap.send(20))
    print(wrap.send(30))
    print(wrap.send(40))


g_avg = average()
warp_avg = wrap_average(g_avg)
main(warp_avg)
