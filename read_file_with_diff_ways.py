#! /usr/bin/python3
import sys

# define a function with reading file by match case
def read_file_by_match_case(num):
    match num:
        case 1:
            #read a single row from this file
            str_one_line = f.readline()
            print("str_one_line:\n",str_one_line) 
        case 2:
            #read all rows from this file
            str_all_lines = f.readlines()
            print("str_all_lines:\n",str_all_lines)
        case 3:
            #read the whole file
            print("read the whole file by interator:\n")
            for line in f:
                print(line,end = ' ') 
        case 4:
            #read the whole file by read
            print("read the whole file by read")
            str_all_file = f.read()
            print("str_all_file:\n",str_all_file)
        case _:
            sys.exit()

# define a function with reading file by if
def read_file_by_if(num):
    if num == 1:
        #read a single row from this file
        str_one_line = f.readline()
        print("str_one_line:\n",str_one_line)
    elif num == 2:
        #read all rows from this file1
        str_all_lines = f.readlines()
        print("str_all_lines:\n",str_all_lines)
    elif num == 3:
        #read the whole file
        print("read the whole file by interator:\n")
        for line in f:
            print(line,end = ' ')
    elif num == 4:
        #read the whole file by read
        print("read the whole file by read")
        str_all_file = f.read()
        print("str_all_file:\n",str_all_file)
    else:
        sys.exit(0)
    



if __name__ == "__main__":
    print("the programing self is running")  
    
    #open a file
    # Linux path: /c/Users/niuyu/Desktop/ellagit/testing.txt
    # Windown path: C:/Users/niuyu/Desktop/ellagit/testing.txt  
    with open("C:/Users/niuyu/Desktop/ellagit/testing.txt","r") as f:

        print("1. read one line from this file.\n2. read all lines from this file.\n3. read the while file by interator.\n4. read the whole file by read")
        num = int(input("please input a number:"))
    
        # read this file
        #read_file_by_if(num)
        read_file_by_match_case(num)

    