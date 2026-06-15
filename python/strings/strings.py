#this is a single-line string/comment
'''
this
is
a
multi-line
string/comment
'''

"""
this
is
also
a
multi-line
string/comment
"""

greet = "hello , World "
reply = " hello, Universe "

#slicing strings
print(greet[:5]) #from first char
print(greet[3:5]) #from third char to fifth char(not included)
print(greet[3:]) #from third char to end
print(greet[-8:-3]) #from seventh char from back to third char(not included) from back

#string length
print(len(greet)) #get length of a string-including spaces

#string check
print("hi" in greet) #check if 'hi' is in 'greet'
print("hello" not in greet) #check if 'hello' is in 'greet'

#string modify
print(greet.upper()) #'greet' in uppercase
print(greet.lower()) #'greet' in lowercase
print(greet.strip()) #removes whitespace at beginning or end of 'greet'
print(greet.replace("h", "m")) #replaces 'h' with 'm' in 'greet'
print(greet.split(",")) #splits string into substrings if separator is in 'greet'

#string concatenation
print(greet + reply) #merge greet and reply with '+'

#string format
idNo = 12435
roomNo = 18
noPerRoom = 2
statement = "student {0} is in room {1} and the max per room is {2}" #'{}' is a placeholder for formatted arguments-index nums '{0}' can be used to specify placeholder
print(statement.format(idNo, roomNo, noPerRoom)) #insert numbers into 'statement' without error

#escape characters
myTxt = "We are the so-called \"vikings\" from the north" #a '\' followed by the character you want to insert

print(myTxt)

#string methods
print(greet.capitalize()) #converts first char in 'greet' to uppercase
print(greet.encode()) #returns an encoded version of 'greet'
print(greet.casefold()) #converts 'greet' to lowercase
print(greet.isspace()) #true if all chars in 'greet' are whitespace
print(greet.index("l")) #searches 'greet' for 'l' and returns postion of 'l' in 'greet'
print(greet.swapcase()) #uppercase becomes lowercase and lowercase becomes uppercase in 'greet'
