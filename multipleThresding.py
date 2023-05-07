import time

def A():
    while True:
        print('----------a----------')
        yield
        time.sleep(1)

def  B(a):
    while True:
        print('------------b-----------')
        next(a)
        time.sleep(1)


if __name__ == '__main__':
    a = A()
    B(a)
