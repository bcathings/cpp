# Module 1


## Software Evolution

- Machine Language 
- Assembly Language 
- Procedure-oriented 
- Object-oriented 

## Procedure Oriented Programming

- top down approch 
- doing things is more important 
- Adding new data and fuctions is hard 
- not based on real world 

> Ex C , Fortran

## Object Oriented Programming

- program is divided into small parts called objects 
- bind together the data and the fuctions that operate on data. 
- So no other part of the code can access this data excep that function. 
- main advantage is Data Encapuslation 
- bottom up approch 
- data is more important 
- based on real world 
- Adding new data and fuctions is easy 

> Ex C++ , JAVA

## Basic Concepts of OOP
- Classes
- Objects
- Encapuslation
- Abstraction
- Polymorphism
- Inheritance
- Dynamic binding

## Classes
building block \
user defined data type \
it holds it's own methods and properties \
method and properties are also called memeber fuctions and  memebers \
methods operate on properties. \
its a blueprint for an object.


## Objects

instance of class \
no memory is allocated for a class but memory is allocated for a object \
objects can communticate with other objects by sending messages to each other 

## Encapuslation
bindng together data and functions as single unit

## Abstraction
hiding non essentinal features from the user. 

## Polymorphism
Ability to take diffrent forms depending on the data providied \
fuction overloading and operator overloading
exhibit diffrent behavior in difrrent instances

## Inheritance

Derive new Classes from Other Classes \
properties and methods of super class is inherited  \
sub class is the class that inherites the super class \ 
since methods and properties are inherted OOP provides reusablilty with inhertance 

## Dynamic binding
Code to be executed in response to function call is decided at runtime
C++ has virutal functions to suppport this.
Also called late binding.


## Benefits of OOP
Through inhertance we can eliminate redundant code and extend the use of existing classses. \
We can save development time by reuseing Classes  \
Security by Abstraction \
Mutiple instance of class can coexist without any  interference. \

## Applications of OOP
- Real - time systems
- Simulation and Modeling.
- Object oriented databases.
- AI and Expert System.
- Neural Nerworks and parallel programming.
- Decision support and office automation systems etc.
- CIM/CAD/CAM 

## CPP simple program
Simple sum using using cpp 

```cpp
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter values:";
    cin>>a>>b;
    c=a+b;
    cout<<"Sum="<<c;
    return 0;
}
```

## Scope Resolution Operator
This operator is used to access variables outside the current scope
Ex: \
```cpp
#include <iostream>
using namespace std;
int main(){
int x = 5;
void main(){
    int x = 23; 
    cout<< "Inner :"<<x << endl;
    cout<< "Outer :"<<::x << endl;
    return 0;
}
```

## I/O manipulation functions

header file : ````#iomanip```` \
sets a certain width of whitespace to output \
setw(width)

## Memory Management Operators

````new````   to allocate memory while run time \
to create objects of any type \
returns pointer to allocated memory

>syntax:  
```` pointer_var = new datatype; ````

We can also assign values to the allocated memory using the following: \
```` datatype *p = new datatype(value); ````

Ex: \
```` int *p = new int(20);````

For arrays: \
<br>
>Syntax: \
```` pointer_var = new datatype[size] ````

<br>

````delete````   to de-allocate memory while run time

>Syntax:
````delete pointer;```` 

For arrays: \

>Syntax: \
```` delete pointer_var[] ````










<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>




didnt care after this to write anything
turbo cpp is shit
