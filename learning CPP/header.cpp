#include "main.hpp"

int main() {
    cout << "Hey there, Checkout theis header file" << endl;

    string userName;
    cout << "Tell em your Nickname: ";
    
    //cin >> userName; OR
    getline(cin, userName);
    cout << userName << endl;
}