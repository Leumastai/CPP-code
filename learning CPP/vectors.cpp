#include <iostream>
#include <stdio.h>

using namespace std;
/*int main()
{
    // Array can be stored as:
    // variableType arrayName [ ] = {variables to be stored in the array};
    // or
    // variableType arrayName[array size]

    int userInput[40];
    for (int i=0; i<40; i++)
    {
        scanf("%d", &userInput[i]);
    }

    //Print array
    for (int i=0; i<40; i++)
    {
        cout << userInput[i] << endl;
    }
    
        //print the array in reverse order
    std::cout<<"\n\nThe array in reverse order\n";
    for(int i = 39; i >= 0; i--)
    {
        std::cout << userInput[i] <<" ";
    }    
    //sorting the array
    for(int i = 0; i < 40; i++)
    {
        for(int j = 0; j < 39 - i; j++)
            {
                if(userInput[j] > userInput[j + 1])
                {
                    int temp;
                    temp=userInput[j];
                    userInput[j]=userInput[j + 1];
                    userInput[j + 1]=temp;
                }
            }
    }
    std::cout<<"\n\nThe array sorted\n";
    for(int i = 0; i< 40; i++)
    {
        std::cout << userInput[i] <<" ";
    }
}*/

int main()
{
    int ss;
    scanf("%d", &ss);
    cout << ss;
    cout << &ss;

    int searchKey = 0;
    int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};
    int location = 0;

    while(1)
    {
        scanf("%d", &searchKey);
        //Enter -1 to break loop
        if (searchKey == -1)
        {
            break;
        }
    
        for (int i=0; i <10; i++)
        {
            if (searchKey == searchArray[i])
            {
                location = i;
                break;
            }
            location = -1;
        }
        if (location != -1)
        {
            cout << searchKey << " is at location " << location << " in the array";
        }
        else
        {
            cout << searchKey << " is not presente in  the array" << endl;
            
        }
    }

    return 0;
}