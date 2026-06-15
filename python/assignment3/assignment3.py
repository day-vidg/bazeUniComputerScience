#print even numbers from 1 to 10
for num in range(1, 11):
    if num % 2 == 0:
        print(num)

#print numbers from 1 to 20, replace 6 with 'six' and 10 with 'ten'
for num in range(1, 21):
    if num == 6:
        print("six")
    elif num == 10:
        print("ten")
    else:
        print(num)

#input a letter and check if it's a vowel or consonant
letter = input("Enter a letter: ").lower()
if letter in ['a', 'e', 'i', 'o', 'u']:
    print("Vowel")
else:
    print("Consonant")

#print number, square, and cube of numbers from 1 to 9 in a table
print("Number\tSquare\tCube")
for num in range(1, 10):
    print(f"{num}\t{num**2}\t{num**3}")

