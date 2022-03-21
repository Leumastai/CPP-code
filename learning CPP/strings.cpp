#include <iostream>
#include <string>
#include <sstream>

using  namespace std;
int main()
{
    string userInput;
    float variableInput = 0;
    string roomWidth;
    string roomLenght;

    float width, lenght, area;

    getline(cin, userInput);

    cout << "Enter room lenght: ";
    // Get userinput
    getline(cin, roomLenght);
    // Convert userInput from string to float
    stringstream(roomLenght) >> lenght;
    cout << "Enter room width: ";
    getline(cin, roomWidth);
    stringstream(roomWidth) >> width;

    cout << "Area of room = " << lenght * width << endl;

    // Convert user input to float variable
    // stringstream(userInput) >> variableInput;
    // cout << variableInput << endl;
    
    return 0; //meaning the program ran sucessfully
    
} // namespace std;



