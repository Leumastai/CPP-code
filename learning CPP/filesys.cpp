#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    string line;
    //creating an output stream to write a file
    fstream myfile1 ("input.txt", ios::app);

    if (myfile1.is_open())
    {
        myfile1 << "Hey mate your first IO in c++.\n";
        myfile1 << "Adding another line here mate. \n";
        myfile1 << "Alright. \t The End." << endl;
        myfile1.close();
    }
    else
    {
        cout << "Unsabel to open file for writing";
    }

    //creating an input stream to read a file
    ifstream myfile0 ("input.txt");
    if (myfile0.is_open())
    {
        while ( getline (myfile0,line) )
        {
            cout << line << '\n' << endl;
        }

        myfile0.close();
    }

    else
    {
        cout << "Unable to open file";
    }
} // namespace std;
