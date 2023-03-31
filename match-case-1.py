#! /usr/bin/python3

print("======= case1 =========")
def http_error(status):
    match status:
        case 400:
            print("Bad request")
        case 404:
            print("Not found")
        case 418:
            print("i am teapot")
        case _:
            print("something wrong with internet")
            
mystatus = 400
http_error(mystatus)  

#===================
print("======== case2 ========")

m = 0
while m < 10:
    print("the count %d is less than 10"% m)
    m = m + 1
else:
    print("the count %d is equal to or bigger than 10" % m)      
    
#===================
print("======== case3 ========")

sites = ["google","baidu","taobao","tiaomao"]
for site in sites:
    if site == "taobao":
        print("the sie is: %s" % site)  
        break
    print("the site is %s" % site)
else:
    print("there is no data on loop")
print("the loop is done")              
 
#===================
print("======== case4 ========")   
word = "beautiful"
for letter in word:
    print(letter)
    
#===================
print("======== case5 ========")  
for i in range(1,6):
    print(i)
    
#===================
print("======== case6 ========")     
for j in range(6):
    print(j) 
else:
    print("game over")
    
    
    
#===================
print("======== case7 ========")

sites = ["google","baidu","taobao","tiaomao"]
for l in range(len(sites)):
    print(l,sites[l])
    
 
 #===================
print("\n======== case8 ========")   
for char in 'PYTHON STRING':
  if char == ' ':
      break

  print(char, end='')
  if char == 'O':
      continue

  
