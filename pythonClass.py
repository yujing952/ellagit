#! /usr/bin/python3

switcher = {
    1: "january",
    2: "february",
    3: "march",
    4: "april",
    5: "may",
    6: "june",
    7: "july",
    8.: "august",
    9: "september",
    10: "october",
    11: "november",
    12: "december"
    }
'''
print("please input a month: ");
month = int(input())
print(switcher.get(month))
'''

class Person(object):
    name = ''
    _age = 0
    __weight = 0

    def __init__(self,name,age, weight):
        self.name = name
        self._age = age
        self.__weight = weight

    def speak(self):
        print("i am %s, %d years old and %d weight" % (self.name, self._age, self.__weight))
        print("self: ", self)
        print("self.__class__: ", self.__class__)
class Plant():
    def __init__(self):
        print("Enter plant")
        print("Leave plant")
class Fruit(Plant):
    def __init__(self):
        print("Enter Fruit")
        super().__init__()
        print("Leave Fruit")
class Vegetable(Plant):
    def __init__(self):
        print("Enter vegetable")
        super().__init__()
        print("Leave vegetable")
class Tomato(Fruit, Vegetable):
    def __init__(self):
        print("Enter Tomoto")
        super().__init__()
        print("Leave Tomato")


class Fibs:
    def __init__(self):
        self.x = 0
        self.y = 1

    def __next__(self):
        self.x, self.y = self.y, self.x + self.y
        return self.x

    def __iter__(self):
        return self


if __name__ == "__main__":

 '''
    p = Person("hello",10,30)
 # call the function by the object of class
    p.speak()

 #  call the function by class name
    Person.speak(p)

    print("after change the name and age:")
    p.name = "Yaoyao"
    p._age = 8
    p.speak()

    print("tomato class")
    tomato = Tomato()
    print(Tomato.__mro__)
 
 '''

 fibs = Fibs()
 for f in fibs:
     if f > 100:
         print(f)
         break




