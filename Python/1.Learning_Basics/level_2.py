from collections import deque #Library for queues

"""
Tuples, sets, dictionary, stack, queues, format

"""

#Tuple (inmutable, does not support item assignment)

t = ("Elle", "Manuel", 10, [1,2,3], -80)
t[3]
print(len(t))
print (len(t[3]))
t.index("Manuel") #find position
t.count(10) #number times value in tuple.

#Set
#not in order, not duplicated items (just keep one of them)

myset = set() #to create a set
myset = {1,2,3,4}
myset.add(6) #add element to set
myset.add('H')
myset.add('B')
print(myset)

collection = {'Elvis','The Cure','Depeche'}
print('Elvis' in collection) #find a item in set

collectionR = {'1','1',2,3}
print(collectionR) # output --> {2,3,'1'}

list = [1,1,2,2,3,3,3]
my_Set = set(list)
print(my_Set)

string = "With a set you can select not repeated values"
my_working_set = set(string)
print(my_working_set) #output ---> {'h', 'i', 'y', 'W', 'a', 'c', 'n', 'l', 'v', 'o', 'p', 't', 'r', 's', 'u', 'e', 'd', ' '}  

#Dictionary

dict = {'Elle':'Driver', 'John':'Wayne','number1':8, 'number2':12} #key value
print(type(dict))
print(dict['John'])

del (dict['Elle']) #delete item
print(dict)

dict['number1'] += 3 #flipa
print(dict)

sum_number = dict['number1'] + dict['number2']
print(sum_number)

for myitems in dict: #just keys
    print (myitems)

for mykeys_values in dict: #keys and values
    print (mykeys_values, dict[mykeys_values])

#List with Dictionary

list = []

list.append(dict)
print(list) #[{'item','item',...}]

dict2 = {'Gary':'Cooper', 'John':'Paul','number3':5, 'number4':2}

list.append(dict2)

print(list) #[{'item','item',...},{'item','item',...},...]


#Stack #in order

mystack = [1,2,3,4]
mystack.append(5)
mystack.append(6)
print(mystack)

print(mystack.pop()) #the item deleted from stack. Is the last item.
print("last item deleted :" + str(mystack))

my_saved_item = mystack.pop()
print("Item pop saved:" + str(my_saved_item) + "\nMy stack: " + str(mystack))

#Queue

myqueue = deque()

print(myqueue) #deque([])
print(type(myqueue))

myqueue = deque(['num1','num2','num3'])

print(myqueue.pop()) #delete last item
print(myqueue.popleft()) #delete first item

print(myqueue)

#Format

variable = 'Elle Driver'
variable2 = 'At work'

forma = "Your are {} and you are {}".format(variable,variable2)
print(forma)

forma = "Your are '{}' and you are '{}'".format(variable,variable2)
print(forma)

forma = "Your are '{1}' and you are '{0}'".format(variable,variable2) #var order
print(forma)

print('{:>50}'.format('Tab text to right'))
print('{:>35}'.format('Tab text to right'))


#Exercise with input, for, list

"""
pass_list = []
print("Please, type your 5 security codes:")

for i in range(5):
    pass_list.append(input("Security code: "))

print(pass_list)
"""


