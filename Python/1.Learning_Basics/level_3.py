"""
functions, return and send values, arguments, params, recursive functions, integrated functions
errors, exceptions, 
"""

#functions

def students ():
    print ("we are students")

students()

def tabla_del_7():
    for x in range(10): # x starts at 1
        print("7 * {} = {}".format(x,x*7))

tabla_del_7()


def warning():
    global myvar #if declared global inside function, can access myvar outside
    myvar ="Elle Global Inside"
    print(myvar)

warning()
print("printing global inside myvar: " + myvar)

#Return

def studentsR():
    return [1,2,3,4]

value = studentsR()
print(value)

#Multiple return

def studentsRR():
    return [1,2,3,4],"Pepe",9

value = studentsRR()
print(value)

a,b,c = studentsRR() #assign return values to different variables
print(a)
print("Second return" + b)
print(c)

#Send values

def sendValues(i,x):
    return i*x

result = sendValues(5,4)
print(result)

#Arguments (value, ref, params)

def arguments (x,i):
    return x+i

results = arguments(3,4)
print(results)

def nulls (x=None,i=None): #validate values
    if x==None or i==None:
        print("Send values")
        return
    return print(x+ i)

resultd = nulls(x=None,i=None)
nulls()
nulls(2,3)

def value_in (value):
    value *= 2
    print(value)
    return value
   
variable = 3
value_in(variable)
print(variable) #variables ONLY change inside function
variable = value_in(variable)
print(variable) #variables change with assignment

"""
def listop(number):
    for x,i in enumerate(number): #Without i --> TypeError: list indices must be integers or slices, not tuple
        number[x] *= 2

list = [1,2,3]
listop(list)
print(list) #list CHANGES values inside functions



#If want to change list values ONLY inside function:
def listOnlyInside(number):
    for x,i in enumerate(number):
        number[x] *= 2
        
    print(number)

list2 = [2,4,6]
listOnlyInside(list2[:]) #here we pass a "copy" of the list [:]
print(list2) #list don't change values outside function

"""
#Indeterminated number of params

def unknown_args (*tu):
    for tus in tu:
        print(tus)

unknown_args("Elle",10,[1,2,3])

def dict_names(**lo):
    print (lo)

dict_names(elle='driver',students='brilliant',score=[7,8,9])
#output: {'elle': 'driver', 'students': 'brilliant', 'score': [7, 8, 9]}

def dict_namesKeys(**lo):
    for x in lo:    
        print (x) #print only keys

dict_namesKeys(elle='driver',students='brilliant',score=[7,8,9]) 
""" output:
elle
students
score
"""

def dict_namesWithValues(**lo):
    for x in lo:    
        print (x, " ", lo[x])  #print keys and values

dict_namesWithValues(elle='driver',students='brilliant',score=[7,8,9])
""" output:
elle   driver
students   brilliant
score   [7, 8, 9]
"""

#Params by position and name at the same time

def dict_names_and_position(*tu,**lo):
    acumulate = 0
    for tus in tu: #position
        acumulate += tus #acumulate values by position
    print(acumulate)
    for x in lo:    #names
        print (x, " ", lo[x])  #print keys and values

dict_names_and_position(1,2,3,4,5,elle='driver',students='brilliant',score=[7,8,9])
""" output:
15   -----> sum of 1,2,3,4,5
elle   driver
students   brilliant
score   [7, 8, 9]
"""

#Recursive: Call itself

def countdown(seconds):
    seconds -= 1
    if seconds >= 0:
        print(seconds)
        countdown(seconds)
    else:
         print("The end")

countdown(10)
    
#Integrated function: change character chain to integer or whatever

e = int("15")
print(e)
e = bin(15) #int to binary
print(e)
e = hex(15) #int to hexadecimal
print(e)
e = abs(-10) #int to absolute (always positive)
print(e)
e = round(5.5) #round to up
print(e)
e = round(5.4) #round to down
print(e)
e = len("Elle") #length
print(e)

#errors

avar = float(input("Intro decimal number: "))
    #if a user intro a letter: ValueError: could not convert string to float: 's'

#errors manage:
try:
    avar = float(input("Intro a number try: "))
    a = 2
    print("Resultado: ", avar)
except:
    print("Not a number")


while(True):
    try:
        avar = float(input("Intro a number while: "))
        a = 2
        print("Resultado: ", avar)
        break
    except:
        print("Not a number")


while(True):
    try:
        avar = float(input("Intro a number else: "))
        a = 2
        print("Resultado: ", avar)
    except:
        print("Not a number")
    else:
        print("Perfect")
        break


while(True):
    try:
        avar = float(input("Intro a number finally: "))
        a = 2
        print("Resultado: ", avar)
    except:
        print("Not a number")
    else:
        print("Perfect")
        break
    finally: #This happen with or without error
        print("Finished")


#exceptions

try:
    number = input("Intro a number: ") # will throw error because input is string
    10/number
except Exception as x: #To know wath kind of exception is
    print(type(x).__name__) #TypeError

#manage multiple exceptions:
try:
    number = float(input("Intro a number multiple exceptions: "))
    10/number
except TypeError:
    print("Letter indentified, not number")
except ValueError:
    print("Must be a number")
except ZeroDivisionError:
    print("Not zero divided")
except Exception as x: 
    print(type(x).__name__) 

#define manual error
def teacher (students=None):
    if students is None:
        print("Must write something")

teacher()


def teacher2 (students=None):
    if students is None:
        raise ValueError("Must write something") #rewrite an error

teacher2()

""" output
Traceback (most recent call last):
  (...)
    raise ValueError("Must write something")
ValueError: Must write something
"""