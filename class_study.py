#! /usr/bin/python3

class Myclass:
    '''a simple class '''
    i = 12345
    def f(self):
        return 'hello,world'

#Instantiated class 实例化类
x = Myclass()

# acess the attribute and method of class
print("Myclass attribute i:",x.i)
print("Myclass method f:",x.f())


# --------------------------
class Complex:
    def __init__(self,realpart,imagpart):
        self.r = realpart
        self.i = imagpart

y = Complex(3.0, -4.5)
print(y.r,y.i)


#-----------------------------
# 从执行结果可以很明显的看出，self 代表的是类的实例，代表当前对象的地址，而 self.class 则指向类
# the output is as the following:
#<__main__.Test object at 0x00000207628D8F50>
#<class '__main__.Test'>

class Test:
    def prt(self):
        print(self)
        print(self.__class__)
        
t = Test()
t.prt()


#----------------------------
class People:
    name = ''
    age = 0
    #定义私有属性,私有属性在类外部无法直接进行访问
    __weight = 0
    
    # define 构造方法
    def __init__(self,n,a,w):
        self.name = n
        self.age = a

        self.__weight = w
    
    def speak(self):
        print("i am %s, %d years old" % (self.name,self.age))
    
p1 = People('yao',6,30)
p1.speak()

#----------------------------------
#单继承
class Student(People):
    grade = ''
    
    def __init__(self, n, a, w, g):
        
        # call parent class init function
        People.__init__(self,n,a,w)
        self.grade = g
    
    def speak(self):
        print("i am %s, %d years old, %d grade student" % (self.name,self.age,self.grade))
        
s1 = Student('tom',7,30,1)
s1.speak()

#------------------------------------
class Speaker:
    topic = ''
    name = ''
    def __init__(self,n,t):
        self.name = n
        self.topic = t
    
    def speak(self):
        print("i am %s, a speaker, my topic is %s" % (self.name,self.topic))


#多重继承
class Sample(Speaker,Student):
    a = ''
    
    def __init__(self, n, a, w, g, t):
        Student.__init__(self,n,a,w,g)
        Speaker.__init__(self,n,t)

test =  Sample('jerry',10,80,4,'python')
test.speak()  #方法名同，默认调用的是在括号中参数位置排前父类的方法

#---------------------------------

#如果你的父类方法的功能不能满足你的需求，你可以在子类重写你父类的方法
class Parent:
    def myMethod(self):
        print("this is parent method")
        
class Child(Parent):
    def myMethod(self):
        print("this is child method")

c = Child()
c.myMethod()
super(Child,c).myMethod()


#-----------------------------
class JustCounter:
    __secretCount = 0
    publicCount = 0
    
    def count(self):
        self.__secretCount += 1
        self.publicCount += 1
        print("__secretCount:",self.__secretCount)  # 实例不能访问私有变量
        
counter = JustCounter()
print("execute 1st:")
counter.count()

print("execute 2nd:")
counter.count()
print('publicCount:',counter.publicCount)


#----------------------------------
class Site:
    def __init__(self,name,url):
        self.name = name
        self.__url = url
    
    def who(self):
        print('name: ',self.name)
        print('url: ',self.__url)
    
    def __foo(self):
        print("this is a private method")
    
    def foo(self):
        print("this is a public method")
        self.__foo()
        

x = Site('google','www.google.com')
x.who()
x.foo()
# x.__foo()
    


