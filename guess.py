#! /usr/bin/python3

number = 7
guess = -1
print("gutes the data!")
while guess != number:
    guess = int(input("please input a digit what you guess:"))
    
    if guess == number:
        print("congratuations ! you are right")
    elif guess < number:
        print("the digit that you guess is less than the number")
    elif guess > number:
         print("the digit that you guess is bigger than the number")