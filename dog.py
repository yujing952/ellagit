#!/usr/bin/python

age = int(input("please input the age of your dog:"))
if age<=0:
    print("are you kiding?")
elif age==1:
    print("that is equal to 14 years old of peiple")
elif age==2:
     print("that is equal to 22 years old of peiple")
elif age>2:
     human = 22 + (age -2)*5
     print("that is equal to %d years old of people" % human)
     
### exit prompt
input("click enter to exit")