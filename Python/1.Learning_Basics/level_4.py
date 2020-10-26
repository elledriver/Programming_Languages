"""
POO, Classes and objects, herencia

"""

#Classes and objects


#void class:
#class Students:
    #pass

#instance class:
#students = Students() #students is an object of Students class

#print(type(Students)) #<class '__main__.Students'>

#Attributes and methods
#Att: reference to class variable
#method: reference to class functions


class Auto():
    pass

car = Auto() #Auto class OBJECT
car.color = "Red" #Att
car.doors = "4" #Att

print("My colour car is: ", car.color)

"""
class Autos():
    manufactured = False

    def __init__(self): #COnstructor. Creates obj automatically when instance a class.
        print("Model auto selected")
    
    def fabricar(self):
        self.manufactured = True
    def confirmar_fabricacion(self):
        if(self.manufactured):
            print("Car manufacturated and ready")
        else:
            print("Car not manufactured")

a = Autos()
print(a.manufactured) #False when 'Free = True'
a.fabricar()
print(a.manufactured) #True when 'self.Free' = True If I put self function is global in class
a.confirmar_fabricacion()
print(a.manufactured)

a = Autos() #1
a.confirmar_fabricacion() #2
a.fabricar() #3
a.confirmar_fabricacion() #4
"""

#Att
"""
class Autos():
    manufactured = False

    def __init__(self, doors=None, colour=None):
        self.doors = doors
        self.colour = colour
        if doors is not None and colour is not None:
            print("Auto selected with {} doors and {} colour".format(doors,colour))
    
    def fabricar(self):
        self.manufactured = True
    def confirmar_fabricacion(self):
        if(self.manufactured):
            print("Car manufacturated and ready")
        else:
            print("Car not manufactured")


a = Autos("4","Green")

"""

class AutosFactory:
    def __init__(self,time,name,wheels): #constructor
        self.time = time
        self.name = name
        self.wheels = wheels
        print("Auto selected", self.name)

    #def __del__(self): #destructor
        #print("Auto destroyed", self.name)

    def __str__(self): #overwrite str
        return "Auto selected {} in {} time with {} wheels".format(self.name, self.time, self.wheels)

    def __len__(self):
        return self.time

b = AutosFactory(10,'Corvette',5)

print(str(b))

#obj length
print("len from class :",len(b))


class AutosWithList:
    __att_private = "Hola"

    def __init__(self,time,name,wheels): #constructor
        self.time = time
        self.name = name
        self.wheels = wheels
        print("Auto selected", self.name)

    def __str__(self): #overwrite str
        return "Auto selected {} in {} time with {} wheels".format(self.name, self.time, self.wheels)

class AutoList:
    autos = []

    def __init__(self,autos=[]): # List created
        self.autos = autos

    def addAuto(self,x): # x is the auto object
        self.autos.append(x) # adding auto to list
    
    def visualize(self):
        for x in self.autos:
            print(x) # x take __str__ class method por defecto !

autoObj = AutosFactory(10,'Maserati',4)
autoToList = AutoList([autoObj])
autoToList.visualize()
autoToList.addAuto(AutosFactory(10,'Corvette',5))
autoToList.visualize()


#public and private

class AttPrivacy:
    __privateATT = "Hi, I am a private attribute"

    def __privateMethod(self):
        print("Hi, I am a private method")
    
    def get_private_att(self):
        return self.__privateATT
    def get_private_method(self):
        return self.__privateMethod()

aut = AttPrivacy()
#aut.__privateMethod #'AttPrivacy' object has no attribute '__privateMethod'
#aut.__privateATT #'AttPrivacy' object has no attribute '__privateATT'

print(aut.get_private_att())
print(aut.get_private_method())

#Herencia
"""super class --> sub class"""

class SuperFactory: #superclass
    def __init__(self,time,name,wheels): #constructor with objects that always exist
        self.time = time
        self.name = name
        self.wheels = wheels
        print("Auto selected", self.name, self.time, self.wheels)

autoObject = SuperFactory(10,'corvette',4)

class SubAuto(SuperFactory): #sub class
    #this class has 2 more atts
    colour = ""
    distributor = ""

    def __str__(self):
        return "{} {} {} {} {}".format(self.name, self.time,self.wheels,self.colour,self.distributor)

miauto = SubAuto(10,'ford',5)
miauto.colour = "rojo"
miauto.distributor = "Pepe distributor"

print(miauto)

# isinstance To evaluate each class. 
"""
For example, if i am evaluating atts from different classes, first I know
if x (in a for loop of a list of autos) is an att of this class:

if isinstance(x,SubAuto)...
if isinstance(x,SuperFactory)....

import copy #library to work with a copy

copia_deportivo = copy.copy(accesorios)
"""

#herencia múltiple

class First:
    def __init__(self):
        print("I am First class")

class Second:
    def __init__(self):
        print("I am Second class")

class Third(First,Second):
    pass


mult_herencia = Third()
print(mult_herencia) #only print "I am First" because Python prior class on the left 'class Third(First<---, Second)

#to solve this:
class FirstA:
    def __init__(self):
        print("I am First class")
    def first(self):
        print("Heredated method from Firsta")

class SecondA:
    def __init__(self):
        print("I am Second class")
    def second(self):
        print("Heredated method form SecondA")

class ThirdA(FirstA,SecondA):
    def third(self):
        print("Heredated method form ThirdA")


multHerencia =ThirdA()
print(multHerencia.first())
print(multHerencia.second())
print(multHerencia.third())



