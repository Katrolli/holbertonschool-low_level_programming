# Variables

Variables are containers for storing data values.

In C, there are different types of variables (defined with different keywords), for example:

```int``` - stores integers (whole numbers), without decimals, such as 123 or -123
```float``` - stores floating point numbers, with decimals, such as 19.99 or -19.99i.
```char``` - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

## Declaring (Creating) Variables

To create a variable, specify the type and assign it a value:

```type variableName = value;```

## Reserved keywords

C keeps a small set of keywords for its own use.

```auto	double	int	struct
break	else	long	switch
case	enum	register	typedef
char	extern	return	union
const	float	short	unsigned
continue	for	signed	void
default	goto	sizeof	volatile
do	if	static	while
```
### Arithmetic Operators in C


The following table shows all the arithmetic operators supported by the C language. Assume variable A holds 10 and variable B holds 20, then −

```+	Adds two operands.	A + B = 30
−	Subtracts second operand from the first.	A − B = -10
*	Multiplies both operands.	A * B = 200
/	Divides numerator by de-numerator.	B / A = 2
%	Modulus Operator and remainder of after an integer division.	B % A = 0
++	Increment operator increases the integer value by one.	A++ = 11
--	Decrement operator decreases the integer value by one.	A-- = 9
```
#### If statements in C


The if statement allows you to control if a program enters a section of code or not based on whether a given condition is true or false. One of the important functions of the if statement is that it allows the program to select an action based upon the user's input.

The structure of an if statement is as follows: 

```
if ( statement is TRUE )
    Execute this line of code
```
An if statement can be followed by an optional else statement, which executes when the Boolean expression is false.
```
if(boolean_expression) {
   /* statement(s) will execute if the boolean expression is true */
} else {
   /* statement(s) will execute if the boolean expression is false */
}
```
##### While statements in C

A while loop in C programming repeatedly executes a target statement as long as a given condition is true.

```
while(condition) {
   statement(s);
}
```

