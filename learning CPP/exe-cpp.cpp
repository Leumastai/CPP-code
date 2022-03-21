// Preprocessor directive
#include <iostream>

// Start of the program
int main()
{
    /*
    // Tell the compiller what namespace to search in
    using namespace std;
    /* Write to the screen using std::cout*/
    cout << "Hello Worlld" << endl;
    //Return a value to the OS
    return 0;

    // or use the direct keyword
    using std::cout;
    using std::endl;

    cout << "Hello World Part 2" << endl;
    return 0;
}