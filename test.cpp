#include <iostream>

using namespace std;

int main(){
    int number=0;
    cout << "Hello, World! sa Feature na pod test" << endl;
    cin >> number;
    cout << "You entered: " << number << endl;
    if(number % 2 == 0){
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    for (int i = 1; i <= 10; ++i){
        cout << number << " * " << i << " = " << number * i << endl;
    }  
    return 0;
}