#include <iostream>

using namespace std;

int main(){
    int number=0;
    cout << "Hello, World!" << endl;
    cin >> number;
    cout << "You entered: " << number << endl;
    if(number % 2 == 0){
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
    return 0;
}