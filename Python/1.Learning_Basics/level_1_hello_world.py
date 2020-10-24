"""
Basics:

print, variables, strings, input, conditions, functions, lists, loops

"""


print ("Hello Tab and Case Sensitive world!")
#This is a comment
"""
This is multiline comment

"""
#Variables

my_variable  = "This is my var"
year = 2020

#Printing variables

print(my_variable)
print(year)

#Concat / Strings

print(f"{my_variable} - {str(year)}") 
print(my_variable +"-"+ str(year)) 

my_str = "Elle driver"
'Elle driver'
print (type (my_str) )#to know the variable type!

print ("my string is going to \njump") #\n
print ("my string is going to \ttab")  #\t
print (r'C:\names\houses') # r + 'text' to avoid \n

variable = "Theory about \nuniverse"
print(variable + variable)

#string index / slicing

word = "0123456789"
print ("word index positive:" + word[4]) #position given fron beggining
print ("word index negative:" + word[-1]) #position given from end
print ("word index rank:" + word[2:5]) #select first position given to second -1 
print ("word 2nd index :" + word[:3]) #012
print ("word 1st index :" + word[3:]) #3456789
print ("word mixed: " + word[2:] + word[:2]) #2345678901

print (len(word))

#Input

website = input("Your website: ")
print("Your website is "+ website)

#Conditions

user_number = float(input ("Tell me you number: "))

if user_number >= 1.80:
    print ("Really high")
else:
     print ("Low number")


phrase = "Hello"

if phrase == "No":
    print ("No")
elif phrase == "Hello":
    print ("Hi!")
else:
    print ("No result")


#Operators
num = 10
print(num > 5 and num > 15)
print(False or True)

name = "Elle"
print(name == "salir" or name == "Elle")
print(name[3] == "p")

print (name[2] != name[3])
print (num >= 10)
print ("Elle" == "Ellé")

True == 1
False == 0

#Functions

def showNumber():
    number = 1.87
    user_number = float(input ("Tell me you number: "))

    if user_number >= number:
        print ("Really high")
    else:
        print ("Low number")

showNumber()

#Function with params
number_from_user = float(input ("Tell me you number: "))

def showNumberParam(number_from_user):
    resultado = ""
        
    if number_from_user >= 5:
        resultado =  "Really high"
    else:
        resultado =  "Low number"

    return resultado

print (showNumberParam(number_from_user)) #print to show variable resultado

#Lists

list = ["Elle", -1, 4, "John", 8, "Donald"] #mixing datatypes... my goodness
print(list)
print(list[3]) #index

first = [1,2,3]
second=[4,5,6]
print(first+second)

print(first + [9,"Pepe",11]) #hahahaha, can't believe
list[4] = "Value changed"
print(list)

list.append(10) #add value to list
list.append(10*2) #admits operations
print(list)

abc = ['A', 'B', 'C', 'D']
abc[:2] = ['a', 'b']
print (abc)

#Nested lists

first = [1,2,3,4]
second = [5,6,7,8]
third = [9,10,11,12]
nested = [first, second, third]
#print(nested)

extract_first =  nested[0]
extract_value = nested[0][2:]

print (extract_value)

#Loops

#for

people = ["Elle", "John", "Gary"]

for person in people:
    print ("One person is: "+ person)

numbers = [1,2,3,4,5]
my_index = 0

for number in numbers: #control by my index
    numbers[my_index] *= 10
    my_index += 1
print (numbers)
##enumerate
for my_index, number in enumerate(numbers):
    numbers[my_index] *= 10
print(numbers)

my_string = "mystring"
for char in my_string:
    print(char)
##range
for i in range(10): #can declarate var inside for
    print(i)

for i in [1,2,3,4,5]:
    print(i)

#while

iterator = 1
while iterator <= 5:
    iterator += 1
    if (iterator == 4):
        print (iterator)
        break #stop the loop.
else:
    print ("Not interating")


#Operations

5+5
10*2
10%2
4**2 #Elevado a

num1 = 8
num2 = 10

print(num1 * num2 - 4**num1 or not (num1 % num2) == 0) #number
print(num1 * num2 - 4**num1 <= 8 or not (num1 % num2) == 0) #true

val = 10
val += 2
val **= 2
print (val)
val -= 3
val *= 2
val /= 3
val %= 2 #mod
print (val)






