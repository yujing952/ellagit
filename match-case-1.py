#! /usr/bin/python3

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
                