#include <iostream>
#include <string>

using namespace std;
int main()
{    

    float num1, num2;
    char operation;
    cin >> num1 >> operation >> num2;


    switch (operation)
    {
    case '-': 
        cout << num1 << operation << num2 << "=" << num1 - num2;
        /* code */
        break;
    
    case '+': 
        cout << num1 << operation << num2 << "=" << num1 + num2;
        break;
    
    case '*':
        cout << num1 << operation << num2 << "=" << num1 * num2;
        break;
    
    case '/':
        cout << num1 << operation << num2 << "=" << num1 / num2;
        break;
    
    case '%': //modulo operation doesn't take float as input
        bool isNum1Int, isNum2Int;
        
        //casting operators: to convert one data type to anaother
        isNum1Int = ((int)num1 == num1); // convert a float to int and check if it equal to num1 
        isNum2Int = ((int)num2 == num2);
        if(isNum1Int && isNum2Int)
            cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
        else
            cout << "This operation is not vlaid" << endl;
        break;

        
    default:
        cout << "Invalid operation" << endl;
        break;

    }
    cout << "Goodbye!" << endl;

    
    /*

    for (;;)
    {
        

        //cout << "Press 'x' to shutdown calculator";
        char userSelection = '\0';
        cin >> userSelection;
        if (userSelection == 'x')
            break;
    }
    cout << "Goodbye!" << endl;

    */

    return 0;
    
} // namespace std

//3:21:53 