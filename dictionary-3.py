#! /usr/bin/python3
def nextline():
        print("--------------")
        return 


tel = {'jack':101,'tom':201,'jerry':301}
print(tel)
tel['yaoyao']=18
print(tel)
del tel['tom']
print(tel)
print(list(tel.keys()))
print(sorted(tel.keys()))
print('jack' in tel)
nextline()
tel1 = dict(hello=1,good=2,lucky=3)
print(tel1)