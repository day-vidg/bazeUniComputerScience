num1 = 10
num2 = 5 

x = ["apple", "onion"]
y = ["orange", "pineapple"]

#arithmetic operators
print(num1 + num2) #addition
print(num1 - num2) #subtraction
print(num1 * num2) #multiplication
print(num1 / num2) #division
print(num1 % num2) #modulus
print(num1 ** num2) #exponentiation
print(num1 // num2) #floor division

#assignment operators
num1 += 5 #num1 = num1 + 5
num2 -= 5 #num2 = num2 - 5
num1 *= 5 #num1 = num1 * 5
num2 /= 5 #num2 = num2 / 5
num1 %= 5 #num1 = num1 % 5
num2 **= 5 #num2 = num2 ** 5
num1 //= 5 #num1 = num1 // 5

#comparison operators
print(num1 == num2) #equal - false
print(num1 != num2) #not equal - true
print(num1 > num2) #greater than - true
print(num1 < num2) #less than - false
print(num1 >= num2) #greater than or equals to - true
print(num1 <= num2) #less than or equals to - false

#logical operators
print(num1 < 15 and num2 < 10) #true if both are true
print(num1 < 10 or num2 < 7) #true if one is true
print(not(num1 < 15 and num2 < 10)) #reverses the result

#identity operators
print(num1 is num2) #true if both are same
print(num1 is not num2) #true if both are not same

#membership operators
print("apple" in x) #true if 'apple' is in list 'x'
print("onion" not in y) #true if 'onion' is not in list 'y'

#bitwise operators
"""
&(and) - sets each bit to 1 if both bits are 1
|(or) - sets each bit to 1 if one of two bits is 1
^(xor) - sets each bit to 1 if only one of two bits is 1
~(not) - inverts all the bits
<<(zero fill left shift) - shift left by pushing zeros in from the right and let the leftmost bits fall off
>>(signed right shift) - shift right by pushing copies of the leftmost bit in from the left, and let the rightmost bits fall off
"""
