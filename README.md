# Class-cpp

#### 1][3d_volume](usingclass_3D_Cube_Volume_Calculator.cpp)
This program calculates the volume of a 3D cube. The user is prompted to enter the height, length, and width of the cube, and the program then calculates and displays the volume.

The program uses a class called `cube` to represent the cube. The `cube` class has three private data members: `height`, `length`, and `width`. The class also has a public method called `volume()` that calculates and returns the volume of the cube.

The main function of the program creates an instance of the `cube` class and then calls the `input()` method to get the height, length, and width of the cube from the user. The program then calls the `volume()` method to calculate the volume of the cube and displays the result.

output:

     Enter the height of the cube: 5
     Enter the length of the cube: 10
     Enter the width of the cube: 15

     The volume of the cube is 750
#### 2][Cube volume calculator](inputandprintvolusingclasswithfunc.cpp)

This program calculates the volume of a cube. The user is prompted to enter the height, width, and length of the cube. The program then calculates the volume of the cube and outputs the result to the console.

output:
          Enter the height of the cube: 5
          Enter the width of the cube: 10
          Enter the length of the cube: 15

          The volume of the cube is 750
#### 3][Volume of a 3d obj calculator](inputandprintvolusingclass.cpp)
 This program calculates the volume of a 3D shape.The program prompts the user to enter the relevant dimensions of the shape. The program then calculates the volume of the shape and outputs the result to the console.
 
     INPUT: 
            2
            2
            2

     OUTPUT:
            8

#### 4][Dob and leap year]()
It defines a class called "day" which has private variables for date, month, and year. It has public methods for inputting values for these variables, checking if the year is a leap year, and calculating the age of a person given their date of birth.

The main function creates an instance of the "day" class and calls the input method to get the date, month, and year from the user. It then calls the leap_checker method to check if the year is a leap year and prints the result. It then calls the agefunction method to calculate the age of the person and prints the result.

The output of the program will be the age of the person in years, months, and days. For example, if the user enters their date of birth as 15/03/1995 and the current date is 18/03/2023, the output will be "age: 27years ,12months , 3days.

     output:

           Enter date(dd/mm/yyyy): 15/03/1995
           leap year : true
           age: 27years  ,12months , 3days.
#### 5][Cube volume ](cubevol.cpp)
The code above is written in C++. It defines a class called "cube" which has public variables for height, width, and length. It also defines a main function which creates an instance of the "cube" class, gets the values for height, width, and length from the user, and then calculates and prints the volume of the cube.


     INPUT:
          5
          5
          10
     OUTPUT:
          250

#### 6] [Cuboid volume ](Cuboid.cpp)
The above code is written in C++. It defines a class called "Cuboid" which has private variables for height, width, and length. It also defines a constructor that takes the values for height, width, and length as arguments and initializes the private variables. The class also defines a method called "volume" that calculates and returns the volume of the cuboid.

The main function creates an instance of the "Cuboid" class by passing the values for height, width, and length that are entered by the user. It then calls the "volume" method on the instance to calculate the volume of the cuboid and prints the result.


     INPUT:
               10
               25
               5
     OUTPUT:
               750

#### 7][Vol of cube](inputandprintvolusingclass.cpp)

The first line of code, #include <iostream>, tells the compiler to include the iostream header file, which contains declarations for input and output operations.

The next line of code, using namespace std;, tells the compiler to use the std namespace, which contains commonly used functions and types.

The next line of code, class cube, declares a class called cube. This class has three public members: height, width, and length. These members are all of type double.

The next line of code, int main(), declares the main function. This is the function that is called when the program starts.

The first line inside the main function, struct cube cu1;, declares a struct variable called cu1 of type cube. This struct variable is used to store the height, width, and length of the cube.

The next three lines of code, cin>>cu1.height; cin>>cu1.length; cin>>cu1.width;, read the height, width, and length of the cube from the user.

The next line of code, double vol=cu1.height*cu1.length*cu1.width;, calculates the volume of the cube.

The last line of code, cout<<vol;, prints the volume of the cube to the console.

In this code, there are no pointers used. However, you can use pointers to access the members of the cube struct. For example, the following code would get the height of the cube:

double height = cu1.height;
This code would create a pointer to the height member of the cu1 struct and then dereference the pointer to get the value of the member.


Input:

          height = 1.0
          width = 1.0
          length = 1.0

Output:

          1.0
