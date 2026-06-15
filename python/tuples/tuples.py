myTuple = ("apple", "mango", "apricot") #first item has index [0], the second [1] and so on..just like lists
#tuples are ordered, unchangeable and allow duplicate values

print(myTuple)

#tuple length
print(len(myTuple))

#tuple with one item
tupleWithOneItem = ("orange",) #without the comma, it will be considered as a string and not a tuple

#tuple items - data types
tuple1 = ("bmw", "audi", "mercedes", "ford", "rangerover", "lamborghini")
tuple2 = (1, 2, 3, 4, 5)
tuple3 = (True, False, True)
mixedTuple = ("apple", 1, True)

print(type(myTuple)) #from python's perspective tuples are defined as objects with the data type 'tuple'

#the tuple() constructor
thisTuple = tuple(("saloon", "truck", "suv"))

print(thisTuple)