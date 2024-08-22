# ECE231_Assignment2
Creating Code Library based on the code in Assignment 1

We will be creating a library from our lab assignment 1.  Follow the notes in the lecture to convert your math functions, sum, standard deviation, and average to a custom library that will be linked in the linkage stage.  We will also be adding a custom structure data type and a custom print function for the array.  Detailed instructions are below.

# Step 1: Library creation
Create two files: statistics.h and statistics.c.  Statistics.h file will contain the funcion declarations.  Stastics.c will contain the function implementation.  Create a library of these two files that can be linked to, i.e. when you compile in this step it should look something like

`gcc -o main main.c -lm -lstatistics`

Ensure assigmment 1 still operates as previously.

# Step 2: New functionality
Add the functions to your new statistics library to find the maximum and minimum of a given input array.  Finally, find the absolute value of the difference between the maximum and minimum.

Next, create an output_array.c and output_array.h that defines a function which takes the array and size as an input argument and outputs the array.
Output the array to the screen using the new function in main.c.  Compilation should look like this:

`gcc -o main main.c output_array.c -lm -lstatistics`

# Grading Scale
code compiles: 30%

library creation: 30%

output_array.c/.h files implemeneted: 20%

code produces expected output: 20%

total: 100%

