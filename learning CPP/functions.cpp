#include <iostream> //meaning input output stream
using namespace std;
/*

int DemoCounsleOutput();

int main()
{
    DemoCounsleOutput();

    return 0;
}

int DemoCounsleOutput()
{
    cout << "This is a simple string lateral" << endl;
    cout << "Writing number five " << 5 << endl;
    cout << "Performing division 10-5 = " << 10 / 5 << endl;
    cout << "Pi is appx. 22 / 7 = " << 22 / 7 << endl;
    cout << "Pi is appx. 22.0 / 7 = " << 22.0 / 7 << endl;

    return 0;

}
*/
// or you can use a more clean method

//Function declaration and definition
int DemoCounsleOutput()
{
    cout << "This is a simple string lateral" << endl;
    cout << "Writing a number five " << 5 << endl;
    cout << "Performing division of 10 / 5 = " << 10 / 5 << endl;
    cout << "Pi is appx 22.0 / 7 = " << 22.0 / 7 << endl;

    return 0;
}

int main()
{
    // Function call with return used to exit
    return DemoCounsleOutput();
}