#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 int
 char
 bool
 float
 double
 void
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int boats = 5;
    int bikes = 3;
    int apples = 12;
    char firstChar = 'a';
    char lastChar = 'z';
    char secondChar = 'b';
    bool hasLegs = true;
    bool hasArms = true;
    bool hasWings = false;
    float daysLeft = 1.5f;
    float hoursLeft = 0.5f;
    float minutesLeft = 3.5f;
    double moneySpent = 23.99;
    double moneyOwed = 1.99;
    double moneyEarned = 200.05;
    
    ignoreUnused(number, boats, bikes, apples, firstChar, lastChar, secondChar, hasLegs, hasArms, hasWings, daysLeft, hoursLeft, minutesLeft, moneySpent, moneyOwed, moneyEarned); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool takeCourse(int daysToComplete, int freeTime)
{ 
    ignoreUnused(daysToComplete, freeTime);
    return {};
}
/*
 2)
 */
int timeUntilSnack(int numberOfApples, int secondsToCut)
{ 
    ignoreUnused(numberOfApples, secondsToCut);
    return {};
}
/*
 3)
 */
float sum(float firstVal, float secondVal, float thirdVal)
{
    ignoreUnused(firstVal, secondVal, thirdVal);
    return {};
}
/*
 4)
 */
int positionInAlphabet(char letter)
{
    ignoreUnused(letter);
    return {};
}
/*
 5)
 */
int numberLegs(bool lostLeftLeg, bool lostRightLeg)
{
    ignoreUnused(lostLeftLeg, lostRightLeg);
    return {};
}
/*
 6)
 */
bool doesItRain(bool hairWet, bool sunShining, int umbrellas = 0)
{
    ignoreUnused(hairWet, sunShining, umbrellas);
    return {};
}
/*
 7)
 */
double finalPrice(double price, int discount = 20)
{
    ignoreUnused(price, discount);
    return {};
}
/*
 8)
 */
float areaSize(float sideA, float sideB)
{
    ignoreUnused(sideA, sideB);
    return {};
}
/*
 9)
 */
bool safeToDrive(bool drankAlcohol, int hoursSinceLastDrink)
{
    ignoreUnused(drankAlcohol, hoursSinceLastDrink);
    return {};
}
/*
 10)
 */
double average(int numberA = 1, int numberB = 10)
{
    ignoreUnused(numberA, numberB);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto courseTaken = takeCourse(28, 45);
    //2)
    auto secondsUntilSnack = timeUntilSnack(5, 30);
    //3)
    auto finalSum = sum(1.34f, 143.21f, 1.0f);
    //4)
    auto position = positionInAlphabet('m');
    //5)
    auto legs = numberLegs(true, false);
    //6)
    auto rain = doesItRain(false, true);
    //7)
    auto price = finalPrice(29.99, 40);
    //8)
    auto area = areaSize(20.45f, 31.34f);
    //9)
    auto shouldDrive = safeToDrive(true, 1);
    //10)
    auto avg = average(34, 45);
    
    ignoreUnused(carRented, courseTaken, secondsUntilSnack, finalSum, position, legs, rain, price, area, shouldDrive, avg);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
