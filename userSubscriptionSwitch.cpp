#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int daysUntilExpiration = rand() % 12;

    cout << "Days until expiration: " << daysUntilExpiration << endl;

    switch (daysUntilExpiration){
    case 0:
        cout<<"Your Subscription has expired"<<endl;
        break;

    case 1:
        cout<<"Your subscription expires within a day"<<endl;
        cout<<"Renew now and save 20%"<<endl;
        break;


    case 2:
    case 3:
    case 4:
    case 5:
        cout<<"Your Subscription expires in "<<daysUntilExpiration<< " days"<<endl;


    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        cout<<"Your subscription expires soon.Renew now"<<endl;  
        
        
    
    default:
        cout<<"You have an active subscription."<<endl;
        break;
    }

    

    return 0;
}