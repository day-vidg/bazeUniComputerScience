#class definition
class calculator:
    def add(num1, num2):
        return num1 + num2
    def subtract(num1, num2):
        return num1 - num2
    def multiply(num1, num2):
        return num1 * num2
    def divide(num1, num2):
        if num2 != 0:
            return num1 / num2
        else:
            return "Error: Division by zero is not allowed."

#user input
print("Welcome to the calculator!\n")

num1 = input("Please enter the first number:")
operation = input("Please select an operation(+ - * /):")
num2 = input("Please enter the second number:")

#if statements to perform the selected operation
if operation == "+":
    result = calculator.add(float(num1), float(num2))
    print(num1, " + ", num2, " is: ", result)
elif operation == "-":
    result = calculator.subtract(float(num1), float(num2))
    print(num1, " - ", num2, " is: ", result)
elif operation == "*":
    result = calculator.multiply(float(num1), float(num2))
    print(num1, " x ", num2, " is: ", result)
elif operation == "/":
    result = calculator.divide(float(num1), float(num2))
    print(num1, " / ", num2, " is: ", result)
else:
    print("Invalid operation selected. Please choose from +, -, *, or /.")
