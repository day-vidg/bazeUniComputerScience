#function to return average of two numbers
def average(a, b):
    return (a + b) / 2

print(average(10, 20))  # Example call

#function to convert Celsius to Fahrenheit
def CelsiusToFaren(celsius):
    return (celsius * 9/5) + 32

print(CelsiusToFaren(0))   # Example call (0°C to 32°F)
print(CelsiusToFaren(100)) # Example call (100°C to 212°F)

#print every alternate number from 1 to 20
for i in range(1, 21, 2):
    print(i)

print()  #for spacing

#print the sequence
for i in range(1, 10):
    print(str(i) * i)
