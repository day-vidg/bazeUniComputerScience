#boolean values
print(10 > 9) #true
print(10 == 9) #false
print(10 < 9)  #false

#evaluate values and variables - values are true as long as they have some sort of content
print(bool("my text")) #true
print(bool(15)) #true
print(bool("")) #false
print(bool(0)) #false

#functions can return a boolean
def myFunction():
    return True

print(myFunction())
