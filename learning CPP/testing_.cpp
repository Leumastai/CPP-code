#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int count = 0;
    char list[4][4] = {{'x','x','y','u'},{'y','u','y','x'},{'x','x','x','x'},{'x','x','x','x'}};
    
    for (size_t i=0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            /* code */
            cout << setw(5);
            cout<< '\n';
            //cout << list[i][j];
            if (list[i][j] == 'x')
            {
                count += 1
            }
        }
        
    }
}