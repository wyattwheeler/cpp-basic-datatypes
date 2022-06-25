#include <iostream>
#include <string>
#include <cstdint> // include C data type library, allows for clear definitions of unsigned, signed, etc datatypes.

// UTILIZE cppreference.com incase you need to jog your memory.
// I do not use namespace standard here, I've been told the hazards and decided against it.

// global variables
int a, b = 5; // declares a & b as a signed int, giving b the value of 5

auto c = 8; // create int based on defined value
auto d = 3.14f; // create float based on defined value
auto f = 'd'; // create character based on defined value

// arrays
// example of usage of const variables over macros
const int AGE_LENGTH = 4;

int age[AGE_LENGTH]; // array of ints, going from 0, 1, 2, 3 (N-1 where N is index count)

// list of floats, implicit conversion would set this to list of float anyway.
// type needs to be specified for arrays
float temp[] = {31.5f, 32.7f, 39.8f};

// be aware macros don't contain types
#define CAPACITY 5000 // definition do not end with a semicolon
#define DEBUG // added debug directive, used below.

int main() {
    std::string str; // create string

    std::cout << "What is your name?\n"; // output asking a question.
    std::cin >> str; // take input and set as string value
    std::cout << "Your name is " << str << "\n"; // output string value at the end of string.

    bool flag_test; // declare bool with name my_flag, zero initialized

    a = 7; // give a value of 7

    std::cout << "a = " << a << "\n"; // print value of a
    std::cout << "b = " << b << "\n"; // print value of b

    std::cout << "flag = " << flag_test << "\n"; // prints 0

    flag_test = true; // set bool value to true

    std::cout << "flag = " << flag_test << "\n"; // prints 1

    std::cout << "a+b = " << a+b << "\n";
    std::cout << "b-a = " << b-a << "\n";

    unsigned int position = b - a; // create unsigned int named position with the value of b (5) minus a (7)

    std::cout << "position = " << position << "\n"; // print value of position in binary form (due to being unsigned int)

    // ARITHMETICS
    // + add
    // - subtract
    // * multiply
    // / divide
    // % modular (remainder of)

    // BITWISE boolean operations (bit by bit)
    // & bitwise and
    // | bitwise or
    // ~ bitwise not
    // ^ bitwise xor

    // LOGICAL operators
    // && and
    // || or
    // ! not

    // RELATIONAL
    // == equals
    // != does not equal
    // > bigger than
    // < smaller than
    // >= bigger or equal to
    // <= smaller or equal to

    // POINTER operations
    // * indirection (dereference point to right)
    // & address of right
    // -> access of structure or classes from pointer

    // IMPLEMENTATION DEPENDENT, using GCC should display first character of the data type
    std::cout << typeid(c).name() << "\n"; // print data type of variable c
    std::cout << typeid(d).name() << "\n"; // print data type of variable d
    std::cout << typeid(f).name() << "\n"; // print data type of variable f

    // cstdint used here to define a signed int of 32 bit (4 bytes) & a unsigned int of 8 bit (1 byte)
    int32_t large = CAPACITY; // utilizing definitions from cstdint
    uint8_t small = 37;

#ifdef DEBUG // debug defined here, used for excluding code not needed for release.
    std::cout << "Performing addition: \n";
#endif

    large += small; // shorthand for large = large + small;

    std::cout << "The large integer is " << large << "\n";

    const int IntConst = 4; // create int with value of four as a constant, meaning it will not change.

    age[0] = 25; // set age variable at index 0 to value of 25
    age[1] = 18; // set age variable at index 1 to value of 18
    age[2] = 32; // set age variable at index 2 to value of 32
    age[3] = 24; // set age variable at index 3 to value of 24

    // demonstration of for loop
    for(int i = 0; i < 4; i++)
        std::cout << age[i] << "\n";

    // demonstration of range based loop
    for(float i : temp)
        std::cout << i << "\n";

    // type casting

    float flt = -7.44f;
    int32_t sgn;
    uint32_t usgn;

    // implicit type casting
    sgn = flt;
    usgn = sgn;

    std::cout << "Float: " << flt << "\n";
    std::cout << "int32: " << sgn << "\n";
    std::cout << "uint32: " << usgn << "\n";

    int fahrenheit = 100;
    int celsius;

    // explicit type casting at (float)5 & make 9 a float value by adding a decimal point
    celsius = ((float)5 / 9.0) * (fahrenheit - 32);

    std::cout << fahrenheit << "\n";
    std::cout << celsius << "\n";

    float weight = 10.99f;

    std::cout << weight << "\n"; // display float
    std::cout << (int)weight << "\n"; // display float as int
    std::cout << (int)((weight - (int)weight) * 1000) << "\n"; // fractional part

    // define array of ints
    int array[4] = {1, 2, 3, 4};

    // define a variable to get the size of above array
    int arraySize = sizeof(array);

    // store added number
    float fStored;
    // store average
    float avg;

    // add all numbers together
    for(int i : array) {
        // convert to float upon adding
        fStored += (float)i;
    }

    // divide stored number by size of array to get the average
    avg = fStored / float(sizeof(arraySize));

    std::cout << fStored << "\n";
    std::cout << "Average: " << avg << "\n";

    return 0;
}
