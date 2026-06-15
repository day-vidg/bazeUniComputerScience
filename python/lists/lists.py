myList = ["a", "b", "c", "d", "e"] #first item has index [0], the second [1] and so on..

print(myList)

#list length
print(len(myList))

#list items - data types
list1 = ["apple", "banana", "pineapple", "watermelon", "orange"]
list2 = [1, 2, 6, 8, 0]
list3 = [True, False, True]
list4 =[2, 6, 8, 9, 1]
mixedCaseList = ["Apple", "banana", "Pineapple", "watermelon", "orange"]
mixedList = ["apple", 43, "pear", True, 21]

print(type(myList)) #from python's perspective, lists are defined as objects with the data type 'list'

#the list() constructor
thisList = list(("onion", "garlic", "ginger"))

print(thisList)

#access list items
print(myList[0], list1[-3])
print(list2[1:4])
print(list2[:2])
print(mixedList[3:])
print(list1[-3:-1])

#check if items exist
if "apple" in list1:

    print("Yes, \"apple\" is in the fruits list")

#change item value
thisList[1] = "curry"

print(thisList)

#change a range of item values
list1[1:3] = ["apricot", "guava"]
list3[1:2] = [False, True]
mixedList[1:3] =["grape"]

print(list1)
print(list3)
print(mixedList)

#insert items - add items at a specified index
list1.insert(2, "kiwi")

print(list1)

#append items - add items to the end of the list
thisList.append("turmeric")

print(thisList)

#extend list - add items from another list to the end of the current list
list1.extend(thisList)

print(list1)

#remove specified items
list1.remove("kiwi")

print(list1)

#remove a specified index
list1.pop() #removes the last item if no index is specified
list3.pop(1)
del list2 #removes the entire list
del list3[:2]

print(list1)
print(list3)
#print(list2) this will give an error because list2 has been deleted

#clear the list - empties the list but keeps the list itself
myList.clear()

print(myList)

#loop through a list - come back to this after learning about loops in more detail

#list comprehension - come back to this after learning about loops in more detail

#sort lists alphanumerically
list1.sort()
list4.sort()

print(list1)
print(list4)

#sort descending
list1.sort(reverse = True)
list4.sort(reverse = True)

print(list1)
print(list4)

#custom sort function
def myFunc(n):
    return abs(n - 5)
list4.sort(key = myFunc)

print(list4)

#case insensitive sort
mixedCaseList.sort(key = str.lower)

print(mixedCaseList)

#reverse the order of the list items
mixedList.reverse()

print(mixedList)

#copy a list
mixedListCopy = mixedList.copy()
list1Copy = list(list1)

print(mixedListCopy)
print(list1Copy)

#join two lists
list1ThisList = list1 + thisList
#using append() to join two lists - come back to this after learning about loops in more detail
list1.extend(thisList)

print(list1ThisList)
print(list1)