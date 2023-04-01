#! /usr/bin/python3

# define a function
def nextline():
        print("--------------")
        return 

def printme(str1):
        print(str1)
        return

def change(a):
        print(id(a))  # direct to the same object
        a = 10
        print(id(a))  # a new object
        
def changeme(mylist):
        #change the transferred list
        mylist.append([1,2,3,4])
        print("the value inside of changeme function", mylist)
        print(id(mylist))
        return

def printinfo(name,age = 20):
        #print any string transferred
        print("name:",name)
        print("age:",age)
        return

# the *parameter is imorted by tuple
def printAnyInfo(arg1,*vartuple):
        #print any parameters transferred
        print("output:")
        print(arg1)
        print(vartuple)
        return

def printAnyInfo2(arg1,*vartuple):
        #print any parameters transferred
        print("output:")
        print(arg1)
        for var in vartuple:
                print(var)
        return

# the **parameter is imorted by dict
def printAnyInfo3(arg1,**vardict):
        print("the output:")
        print(arg1)
        print(vardict)
        

if __name__ == '__main__':
        print('the program self is running')
        
        #call hello function
        printme("hello,how are you?")
        printme("fine, thanks.")
        nextline()

        #call change function
        a = 1
        print(id(a))
        change(a)
        nextline()

        #call changeme function
        mylist = [10,20,30]
        print(id(mylist))
        changeme(mylist)
        print("the value outside of changeme function", mylist)
        nextline()

        #call printinfo function
        printinfo(age=6,name='yaoyao')
        printinfo(name='lucky')
        nextline()

        #call printAnyInfo/printAnyInfo2 function
        printAnyInfo(70,60,50)
        nextline()

        printAnyInfo2(70)
        nextline()

        printAnyInfo2(70,60,40)
        nextline()

        #call printAnyInfo3 function
        printAnyInfo3(1,a=2,b=3)
        nextline()
        nextline()
        nextline()

else:
         print('I am from another module')
