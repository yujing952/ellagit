#! /usr/bin/python3
import abc  # 利用abc模块实现抽象类
from abc import ABC
from abc import abstractmethod

class Game(object):
    top_score = 0

    @staticmethod
    def show_help():
        print("help information...")

    @classmethod
    def show_top_score(cls):
        print("the top score of game: %d" % cls.top_score)

    def __init__(self,player_name):
        self.player_name = player_name

    def start_game(self):
        print("[%s] begin to game..." % self.player_name)


class File(metaclass=abc.ABCMeta):  # abc.ABCMeta是实现抽象类的一个基础类
    @abc.abstractmethod  # 定义抽象方法，无需实现功能
    def read(self):
        pass


class Txt(File):  # 子类继承抽象类，但是必须定义read方法将抽象类中的read方法覆盖
    def read(self):
        print('文本数据的读取方法')

class Database(ABC):
    def register(self,host,user,password):
        print("Host: {}".format((host)))
        print("User: {}".format(user))
        print("Password: {}".format(password))
        print("Register Success!")

    @abstractmethod
    def query(self,*args):
        # transfer the SQL and execute
        pass

    @staticmethod
    @abstractmethod
    def execute(sql_string):
        # execute SQL
        pass


class Component1(Database):
    def __init__(self,host,user,password):
       self.register(host,user,password)

    @staticmethod
    def execute(sql_string):
        print(sql_string)

    def query(self,*args):
        sql_string = "SELECT ID FROM db_name"
        self.execute(sql_string)


class Component2(Database):
    def __init__(self, host, user, password):
        self.register(host, user, password)

    @staticmethod
    def execute(sql_string):
        print(sql_string)

    def query(self, *args):
        sql_string = "SELECT NAME FROM db_name"
        self.execute(sql_string)


if __name__ == "__main__":

    print("--------1--------")
    # use class name(Game) to update the top score
    Game.top_score = 999
    
    Game.show_help()
    Game.show_top_score()

    game = Game("yujing")
    game.start_game()
    Game.show_top_score()

    print("--------2--------")
    txt1 = Txt()
    txt1.read()  # 可以正常打印
 #   txt2 = File()
 #   txt2.read()  # 会报错 提示未实现 TypeError: Can't instantiate abstract class File with abstract method read

    print("--------3--------")
    comp1 = Component1("00.00.00.00","abc","000000")
   # comp2 = Component2("11.11.11.11","ABC","111111")
    comp1.query()
  #  comp2.query()



