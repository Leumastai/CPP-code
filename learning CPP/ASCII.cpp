#include <iostream>

using namespace std;

int main()
{
    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters \n";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "The ASCII value for " << c1 << c2 << c3 << c4 << c5 << " is " << \
        int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << '\n' << endl;
    
    //store the ASCII value to ta list
    int ui [5]= {int(c1), int(c2), int(c3), int(c4), int(c5)};
    
    cout << "if you wish to decipher the ASCII values enter 'y' or enter any key to decipher another value: ";
    char opt = 'y';
    cin >> opt;
    if (opt=='y')
    {
        //Dicphering the ASCII values
        cout << "Dicphering the ASCII value for " << c1 << c2 << c3 << c4 << c5 << endl;
        cout << char(ui[0]) << " " << char(ui[1]) << " " << \
            char(ui[2]) << " " << char(ui[3]) << " " << char(ui[4]) << endl;
    }
    else
    {
        cout << "Enter the number you wish to get the ASCII value between 0 and 128" << endl;
        int val;
        cin >> val;

        cout << "The ASCII value for " << val << " is ";
        cout << char(val) << endl;
    }

    cout << "Thanks for using sam's deciphering program" << endl;
    return 0;
} // namespace std;
