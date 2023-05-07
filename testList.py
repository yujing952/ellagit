#!/usr/bin/python3

new_list = []


def get_min(*args):
    a = min(*args)
    new_list.append(a)
    list1.remove(a)
    if len(*args) > 0:
        get_min(*args)
    return new_list


if __name__ == "__main__":
    list1 = [2, 3, 5, 4, 9, 6]
    new_list = get_min(list1)
    print(new_list)








