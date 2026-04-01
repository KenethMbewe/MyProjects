#include <iostream>
using namespace std;

int main() {
    int value;
    
    cout << "Enter an integer value between 5 and 10: ";
    
    
    while (!(cin >> value) || value < 5 || value > 10) {
        
        if (cin.fail()) {
            cin.clear();            
            cin.ignore(1000, '\n'); 
            cout << "Sorry, you entered an invalid number, please try again" << endl;
        }
        else {
            cout << "You entered " << value
                 << ". Please enter a number between 5 and 10." << endl;
        }

        cout << "Enter an integer value between 5 and 10: ";
    }

    
    cout << "Your input value(" << value << ") has been accepted." << endl;

    return 0;
}