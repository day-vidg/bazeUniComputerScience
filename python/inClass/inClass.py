#assignment 4 review
def average(a, b, c, d, e):
    total = a + b + c + d + e
    avg = total / 5
    return avg
myResult = average(2, 4, 6, 8, 10)
myOtherResult = average(1, 3, 5, 7, 9)

print(int(myResult))
print(int(myOtherResult))


#scope of a variable
a = 0 # 'a' is a global variable
def addPrint(b):
    c = 5 #'c' is a local variable
    d = b + c #'d' is a local variable
    
    print(c)
    print(d)
addPrint(6)

print(a)
#print(c) #'c' is non-existent
#print(d) #'d' is non-existent

#global variables can be accessed outside or inside a function
globalVar = "outside"
def myFunc():
    localVar = "inside"
    
    print(globalVar)
    print(localVar)
myFunc()

print(globalVar)
#print(localVar) 'localVar' is non-existent

#global and local variables with the same name
var = "a"
def myOtherFunc():
    var = "b"

    print(var) #'var' is b
myOtherFunc()

print(var) #'var' is a

#setting a global variable in a function
var = "a"
def myLastFunc():
    global var
    var = "b"

    print(var) #'var' is b
myLastFunc()

print(var) #'var' is b


#exception handling
print("checking exceptions")
a = 14
b = 0
try:
    # attempt a division that may fail
    print(a / b)
    print(a)
    print(b)
except ZeroDivisionError as e:
    # handle division by zero specifically
    print("error: division by zero")
    print("a =", a, "b =", b)
except Exception as e:
    # handle any other unexpected exceptions
    print("unexpected error:", e)
else:
    # runs if no exception was raised
    print("division successful")
finally:
    # always runs
    print("finished checking exceptions")
