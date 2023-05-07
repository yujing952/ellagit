#! /usr/bin/python3

"""

# Generator
my_generator = (x*x for x in range(3))

for i in my_generator:
    print(i)


# Yield
def create_generator():
    mylist = range(3)
    for i in mylist:
        yield i*i
my_gener = create_generator()
print(my_gener)
for i in my_gener:
    print(i)

"""


class Bank:
    crisis = False

    def create_atm(self):
        while not self.crisis:
            yield "$100"


minsheng_bank = Bank()
corner_street_atm = minsheng_bank.create_atm()

print("1:", corner_street_atm.__next__())
print("2:", corner_street_atm.__next__())
print("3:", [corner_street_atm.__next__() for cash in range(5)])

minsheng_bank.crisis = True   # Crisis is coming, no more money!
# print('4(minsheng_bank.crisis = True)',corner_street_atm.__next__())

wall_street_atm = minsheng_bank.create_atm()  # it's even true for new ATMs
# print('5', wall_street_atm.__next__())

minsheng_bank.crisis = False  # The trouble is, even post-crisis the ATM remains empty
print('6. reset crisis false:', corner_street_atm.__next__())
print('7. reset crisis false:', wall_street_atm.__next__())

print("create brand_new_atm< when crisis is false:")
brand_new_atm = minsheng_bank.create_atm()
print('8:', brand_new_atm.__next__())

# for cash in brand_new_atm:
#    print(cash)
