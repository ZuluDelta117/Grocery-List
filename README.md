# Overview

A basic program allowing me to practice writing in C++. 

This program will create a grocery list taking user input of what they want to buy, how much it will cost, and where they would like to buy it. Then it will add the input into a set of vectors. The user can choose when to exit the program and if they want to view thier grocery list. It will also add the total price of their shopping list before taxes are applied. 


[Software Demo Video](http://youtube.link.goes.here)

# Development Environment

The tools I used was VisualStudio Code with the C/C++ extenstion. I also had to include a compiler so I used the "MinGW Gnu Compiler Collection (GCC)" and added it into my path allowing my terminal to read the C++ code.

C++ does not have a lot in its standard library so I had to include a few libraries.
- iostream: Allows for input and output
- string: Allows for string variables
- vector: Allows creating vectors
- numeric: Imports a math library allowing me to add all values in a vector
- iomanip: Allows me to format my float to a certain decimal value

# Useful Websites

- [MinGW Gnu Compiler Collection](https://osdn.net/projects/mingw/)
- [C++ w3schools](https://www.w3schools.com/cpp)
- [geeksforgeeks finding the sum of vectors](https://www.geeksforgeeks.org/how-to-find-the-sum-of-elements-of-a-vector-using-stl-in-c/)
- [Stackoverflow functions within classes](https://stackoverflow.com/questions/682721/calling-member-functions-within-main-c)
- [How to format a float](https://www.woolseyworkshop.com/2019/11/22/quick-tip-how-to-format-floating-point-output-in-c/)
- [How to capitilize a string](https://stackoverflow.com/questions/8530529/convert-first-letter-in-string-to-uppercase)

# Future Work

- Upload grocery list to a text file or an API so you can save your list and update it later
- Calculate estimated tax based on location
- Create option to remove item from grocery list
- Make vectors into a dictionary so data is connected 
- Sort items by where they will be bought