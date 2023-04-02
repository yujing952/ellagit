#! /usr/bin/python3

list_case = [9,9,9,8,7,6,6,6,4,3,5,3,5,2]
print("the orginal list_case:\n",list_case)

re = []
for x in list_case:
    if x in re:
        continue
    else:
        re.append(x)

print('the list_case after dropping the duplicate number:\n',re)
