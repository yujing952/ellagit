#！/usr/bin/python3

import threading

'''
def run(n):
    print('current task:',n)
    
if __name__ == '__main__':
    t1 = threading.Thread(target=run(1),args=('thread 1'))
    t2 = threading.Thread(target=run(2),args=('thread 2'))
    t1.start()
    t2.start()
'''    

class MyThread(threading.Thread):
    def __init__(self,n):
        super(MyThread,self).__init__()
        self.n = n
    
    def run(self):
        print('the current task:', self.n)

if __name__ == "__main__":
    t3 = MyThread('thread 5')
    t4 = MyThread('thread 4')
    t3.start()
    t4.start()
    