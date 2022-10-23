# Pointers

A pointer is the address of a piece of data in memory. A pointer variable is a variable that stores the address of that piece of data. Like any other variable it needs to be declared. General form is:
```var_type *var;```

The ```*``` tells that the variable ```var``` is a pointer…
… that points to a ```var_type```.
The value of ```var``` will be a memory address holding a value of type 
```var_type```


## Data Types

Data type is a way to classify various types of data such as integer, string, etc. which determines the values that can be used with the corresponding type of data, the type of operations that can be performed on the corresponding type of data. There are two data types

```
Built-in Data Type

Derived Data Type
```

***Built-in Data Type***

Those data types for which a language has built-in support are known as Built-in Data types. For example, most of the languages provide the following built-in data types.

```
Integers
Boolean (true, false)
Floating (Decimal numbers)
Character and Strings
```

***Derived Data Type***

Those data types which are implementation independent as they can be implemented in one or the other way are known as derived data types. These data types are normally built by the combination of primary or built-in data types and associated operations on them. For example −

```
List
Array
Stack
Queue
```

## Arrays

It is a group of variables of similar data types referred to by a single element.
Its elements are stored in a contiguous memory location.
The size of the array should be mentioned while declaring it.
Array elements are always counted from zero (0) onward.
Array elements can be accessed using the position of the element in the array.
The array can have one or more dimensions.

To declare an array in C, a programmer specifies the type of the elements and the number of elements required by an array as follows −

```type arrayName [ arraySize ];```

An element is accessed by indexing the array name. This is done by placing the index of the element within square brackets after the name of the array. For example −

```double salary = balance[9];```

The above statement will take the 10th element from the array and assign the value to salary variable.

### Strings

Strings are actually one-dimensional array of characters terminated by a null character '\0'. Thus a null-terminated string contains the characters that comprise the string followed by a null.

The following declaration and initialization create a string consisting of the word "Hello". To hold the null character at the end of the array, the size of the character array containing the string is one more than the number of characters in the word "Hello."

```char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};```

If you follow the rule of array initialization then you can write the above statement as follows −

```char greeting[] = "Hello";```



