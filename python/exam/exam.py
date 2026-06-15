#question 2b
a = 0
def add(b):
    c = 5
    d = b + c
    
    print(c)
    print(d)

print(add(6))
print(a)

#question 2c
weightInKilograms = int(input("Enter your weight in kilograms: "))
weightInGramms = int(input("Enter your weight in grams: "))

print("Your weight in grams is", weightInKilograms * 1000)
print("Your weight in kilograms is", weightInGramms / 1000)

#question 3a
#question 3b
#question 4a
monthlySalary = int(input("Enter your monthly salary: "))

if monthlySalary < 20000:
    print("No tax taken")
elif monthlySalary >= 20000 and monthlySalary <= 50000:
    taxAmount1 = 0.1 * monthlySalary
    taxedSalary1 = monthlySalary - taxAmount1

    print("Your salary is now ", taxedSalary1," due to 10%(i.e", taxAmount1,") being taken out")
elif monthlySalary > 50000:
    taxAmount2 = 0.2 * monthlySalary
    taxedSalary2 = monthlySalary - taxAmount2

    print("Your salary is now ", taxedSalary2," due to 20%(i.e", taxAmount2,") being taken out")

#question 4b
#question 4c
userLetter = input("Enter a letter: ")
if userLetter == "a" or userLetter == "e" or userLetter == "i" or userLetter == "o" or userLetter == "u":
    print(userLetter, " is a vowel")
elif userLetter == "b" or userLetter == "c" or userLetter == "d" or userLetter == "f" or userLetter == "g" or userLetter == "h" or userLetter == "j" or userLetter == "k" or userLetter == "l" or userLetter == "m" or userLetter == "n" or userLetter == "p" or userLetter == "q" or userLetter == "r" or userLetter == "s" or userLetter == "t" or userLetter == "v" or userLetter == "w" or userLetter == "x" or userLetter == "y" or userLetter == "z":
    print(userLetter, " is a consonant")
else:
    print("Invalid input")

