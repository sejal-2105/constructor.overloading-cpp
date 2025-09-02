# constructor.overloading-cpp
Experiment 1: Constructor Overloading

Aim: To demonstrate constructor overloading by creating multiple constructors with different numbers and types of arguments to initialize an object.

Theory: Constructor overloading is the process of having multiple constructors in a class with the same name but different parameter lists. When an object is created, the compiler chooses the appropriate constructor based on the number and type of arguments passed. This provides flexibility in object initialization.

Algorithm:
 * Define a class Room with private members length and breadth.
 * Create three public constructors:
   * A default constructor with no arguments that initializes length to 6.9 and breadth to 4.2.
   * A constructor that takes two double arguments (l and b) and initializes length and breadth with these values.
   * A constructor that takes one double argument (len) and initializes length with this value while setting breadth to a fixed value of 7.2.
 * Define a public method calculateArea() to return the product of length and breadth.
 * In main, create three Room objects:
   * room1 with no arguments (uses the default constructor).
   * room2 with two arguments (8.2, 6.6) (uses the two-argument constructor).
   * room3 with one argument (8.2) (uses the one-argument constructor).
 * Print the area for each object by calling the calculateArea() method.
   
Experiment 2: Copy Constructor

Aim: To demonstrate the use of a copy constructor to create an object that is a copy of an existing object.

Theory: A copy constructor is a special constructor that creates a new object as a copy of a previously created object. It is typically defined with a reference to an object of the same class. This allows the new object to be initialized with the state (data) of the existing object.

Algorithm:
 * Define a class fetch with a private integer member num.
 * Create three public constructors:
   * A default constructor that initializes num to 3.
   * A parameterized constructor that initializes num with a given integer value x.
   * A copy constructor that takes a reference to a fetch object (&b) and copies its num value to the new object.
 * Define a disp() method to print the value of num.
 * In main, create three fetch objects:
   * f1 using the default constructor.
   * f2 using the parameterized constructor, passing 6.
   * f3 using the copy constructor, passing f1 as an argument.
 * Call the disp() method on each object to show their respective values.

Experiment 3: Copy Constructor for a Class with Multiple Data Types

Aim: To demonstrate the use of a copy constructor for a class containing members of different data types.

Theory: The copy constructor's behavior remains consistent regardless of the data types of the class members. It copies the values of all members from the source object to the newly created object, ensuring that the new object is an exact replica of the original at the time of creation.

Algorithm:
 * Define a class area with private members len (float) and bre (int).
 * Create three public constructors:
   * A default constructor that initializes len to 10 and bre to 20.
   * A parameterized constructor that takes a float l and an int b to initialize the members.
   * A copy constructor that takes a reference to an area object (&l1) and copies its len and bre values.
 * Define a disp() method to calculate and print the product of len and bre.
 * In main, create three area objects:
   * a1 using the default constructor.
   * a2 using the parameterized constructor, passing 15.6 and 10.
   * a3 using the copy constructor, passing a1 as an argument.
 * Call the disp() method on each object to show the calculated area.
   
Conclusion
These experiments demonstrate the versatility of C++ constructors. They highlight how constructor overloading allows for flexible object initialization using different argument lists, while copy constructors provide a robust mechanism for creating new objects from existing ones, ensuring data integrity across different scenarios.
