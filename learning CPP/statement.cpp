#include <iostream>
#include <bitset>

using namespace std;

/*

int main()
{
    cout << "Hello World" << endl; cout << "Another hello" << endl;
    cout << "Hello \
        World" << endl; // split to two lines is okay
    
    
    //compund statements or blocks
    int daysInYear = 365;
    cout << "Block contains an int and a cout statement" << endl;
    int num1 = 0, num2 = 0;

    cout << "Enter two integers: " << endl;
    cin >> num1;
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 *  num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;


    //Increment ( ++ ) and Decrement ( -- )
    
    //int num1 = 101;  
    //int num2 = num1++; // Postfix increment operator
    //int num3 = ++num1; // Prefix increment operator
    //int num4 = num1--; // Postfix decrement operator
    //int num5 = --num1; // Prefix increment operator  

    
    int startValue = 101;
    cout << "Start value of integer being operated: " << startValue << endl;
    
    int postfixIncrement = startValue++;
    cout << "Result of Postfix Increment = " << postfixIncrement << endl;
    cout << "After Postfix Increment, startValue = " << startValue << endl;

    startValue = 101; // Reset
    int prefixIncrement = ++startValue;
    cout << "Result of Prefix Increment = " << prefixIncrement << endl;
    cout << "After Prefix Increment, startValue = " << startValue << endl;

    startValue = 101;
    int postfixDecrement = startValue--;
    cout << "Result of Postfix Decrement = " << postfixDecrement << endl;
    cout << "After Postfix Decrement, startValue = " << startValue << endl;
    
    startValue = 101; // Reset
    int prefixDecrement = --startValue;
    cout << "Result of Prefix Decrement = " << prefixDecrement << endl;
    cout << "After Prefix Decrement, startValue = " << startValue << endl;

    return 0;
}

*/

int main()
{
    int a = 15, w, x, y, z;

    //w = ++a;
    //x = a++;
    y = --a;
    //z = a--;

    //cout << "w = " << w << endl; // here w and a results in 16
    //cout << "x = " << x << endl; // here x and a result in 15 and 16 respect.
    cout << "y = " << y << endl; // here both y and a results in 14 
    //cout << "z = " << z << endl; // here z and a results in 15 and 14 respectively
    cout << "a = " << a << endl;

    return 0;
}

/*

//Equality operators (==) and (!=)

int personAge = 20;
bool checkEquality = (personAge == 20);
//bool checkEquality = (personAge != 100);

//bool checkEqualityAgain = (personAge == 100);
bool checkEqualityAgain = (personAge != 20);


int main()
{
    // false == 0, true == 1
    cout << "Enter two integers: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    bool isEqual = (num1 == num2);
    cout << "Result of equality test: " << isEqual << endl;

    bool isUnequal = (num1 != num2);
    cout << "Result of inequality test: " << isUnequal << endl;

    bool isGreaterThan = (num1 > num2);
    cout << "Result of " << num1 << " > " << num2;
    cout << " test is: " << isGreaterThan << endl;

    bool isLessThan = (num1 < num2);
    cout << "Result of " << num1 << " < " << num2 << " test:" << \
            isLessThan << endl;

    bool isGreaterThanEquals = (num1 >= num2);
    cout << "Result of " << num1 << " >= " << num2;
    cout << " test is: " << isGreaterThanEquals << endl;

    bool isLessThanEquals = (num1 <= num2);
    cout << "Result of " << num1 << " <= " << num2;
    cout << " test: " << isLessThanEquals << endl;

    return 0;
}
*/

/*
int main()
{
    cout << "Enter true(1) of false(0) for two operands: " << endl;
    bool op1 = false, op2 =false;

    cin >> op1;
    cin >> op2;

    cout << op1 << " AND " << op2 << " = " << (op1 && op2) << endl;
    cout << op1 << " OR " << op2 << " = " << (op1 || op2) << endl;

    return 0;
}
*/

//Logical NOT ( ! ) and Logical AND ( && ) Operators in if Statements
//for Conditional Processing

/*
int main()
{
    cout << "Use boolean values(0 / 1) to answer the questions" << endl;
    cout << "Is it raining? ";
    bool isRaning = false;
    cin >> isRaning;

    cout << "Do you have buses on the streets ";
    bool busesPly = false;
    cin >> busesPly;

    // conditional statement uses logical AND and NOT
    if (isRaning && !busesPly) //translated as  "Raning AND NO buses"
        cout << "You cannnot go to work" << endl;
    else
        cout << "You can go to work" << endl;
    
    if (isRaning && busesPly) //translated as "Raning AND buses"
        cout << "Take an umbrella" << endl;

    if ((!isRaning) && busesPly) //translated as "NOT Raning and buses"
        cout << "Enjoy the sun and have a nice day" << endl;

    return 0;
}
*/

/*
int main()
{
    cout << "Enter 0 for false and 1 for true." << endl;
    bool doneProject = true, passedCourses = true;
    cout << "Have you completed your project work? ";
    cin >> doneProject;
    
    cout << "Have you passed your cousre work? ";
    cin >> passedCourses;

    if (doneProject && passedCourses) 
        cout << "You can graduata. YAY" << endl;
    else
        cout << "You cannot graduate from FUTA" << endl;
    
    return 0;

}
*/

/*
int main()
{
    cout << "Answer question with 0 or 1" << endl;
    bool onDiscount = false, fantasticBonus = false;
    cout << "Is there a discount on your favorite car? ";
    cin >> onDiscount;

    cout << "Did you get a fantastic bonus? ";
    cin >> fantasticBonus;

    if (onDiscount || fantasticBonus)
        cout << "Congratulations, you can buy that car!" << endl;
    else
        cout << "Sorry, waiting a while is a good idea" << endl;

    if (!onDiscount)
        cout << "Car not on discount" << endl;

    return 0;
}
*/

/*

//Bitwise NOT ( ~ ), AND ( & ), OR ( | ), and XOR ( ^ ) Operators
int main()
{
    cout << "Enter a number (0 - 255): ";
    unsigned short inputNum = 0;
    cin >> inputNum;

    bitset<8> inputBits (inputNum);
    cout << inputNum << " in binary is " << inputBits << endl;

    bitset<8> bitwiseNOT = (~inputNum);
    cout << "Logical Not ~" << endl;
    cout << "~" << inputBits << " = " << bitwiseNOT << endl;

    cout << "Logical AND, & with 00001111" << endl;
    bitset<8> bitwiseAND = (0x0F & inputNum); //0x0F is hex for 0001111
    cout << "0001111 & " << inputBits << " = " << bitwiseAND << endl;

    cout << "Logical OR, | with 00001111" << endl;
    bitset<8> bitwiseOR = (0x0F | inputNum);
    cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;

    cout << "Logical XOR, ^ with 00001111" << endl;
    bitset<8> bitwiseXOR = (0x0F ^ inputNum);
    cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR << endl;

    return 0;
}
*/
 
/*
//Bitwise right shift (>>) and left shif (<<) operators
int main()
{
    cout << "Enter a number: ";
    int inputNum = 0;
    cin >> inputNum;

    int halfNum = inputNum >> 1;
    int quarterNum = inputNum >> 2;
    int doubleNum = inputNum << 1;
    int quadrupleNum = inputNum << 2;

    cout << "Quarter: " << quarterNum << endl;
    cout << "Half: " << halfNum << endl;
    cout << "Double: " << doubleNum << endl;
    cout << "Quadruple: " << quadrupleNum << endl;

    //compound operators

    cout << "Enter the first number: ";
    int num1 = 0, num2 = 0;
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Additional assignment: " << (num1 += num2) << endl; // i.e num1 = num1 + num2
    cout << "Multiplication assignment: " << (num1 *= num2) << endl; // i.e num1 = num1 * num2
    cout << "Divisional assignment: " << (num1 /= num2) << endl;
    cout << "Subtraction assignment: " << (num1 -= num2) << endl;
    cout << "Modulo assignment: " << (num1 %= num2) << endl;
    cout << "Bitswise Left-Shift assignment: " << (num1 <<= num2) << endl;
    cout << "Bitwise Right-Shift assignment: " << (num1 >>= num2) << endl;
    cout << "Bitwise AND assignment: " << (num1 &= num2) << endl;
    cout << "Bitwise OR assignment: " << (num1 |= num2) << endl;
    cout << "Bitwise XOR assignment: " << (num1 ^= num2) << endl;


    return 0;

}

*/

//using sizeof to determine the number of bytes occupied 
//by an array of 100 integeres, and that by each in it

/*
int main()
{
    cout << "Use sizeof to determine memory used by arrays" << endl;
    int myNumbers [100] = {0};

    cout << "Bytes used by an int: " << sizeof(int) << endl;
    cout << "Bytes used by myNumbers: " << sizeof(myNumbers) << endl;
    cout << "Bytes used by an element: " << sizeof(myNumbers[0]) << endl;

    cout << "enter a number: ";
    int number  = 0;
    cin >> number;
    
    cout << "Result: " << ((number << 1) + 5) << 1 << endl;
    return 0;
}
*/