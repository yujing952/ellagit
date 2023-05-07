#! /usr/bin/python3

from functools import wraps


# 使用装饰器实现单例模式  singleton by using decorator
def singleton(cls):
    instances = {}

    @wraps(cls)
    def wrapper(*args, **kwargs):
        if cls not in instances:
            instances[cls] = cls(*args, **kwargs)
        return instances[cls]
    return wrapper


@singleton
class President:
    pass


# 使用元类实现单例模式 singleton by metaclass
class SingletonMeta(type):
    # 自定义单例元类
    def __init__(cls, *args, **kwargs):
        cls.__instance = None
        super().__init__(*args, **kwargs)

    def __call__(cls, *args, **kwargs):
        if cls.__instance is None:
            cls.__instance = super().__call__(*args, **kwargs)
        return cls.__instance


class PresidentMeta(metaclass=SingletonMeta):
    pass
