#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Sample database represented as a vector of strings
    vector<string> database = {
        "Record 1: Alice, 30, Engineer",
        "Record 2: Bob, 25, Designer",
        "Record 3: Charlie, 35, Teacher"
    };

    // Display all records in the database
    cout << "Database Records:" << endl;
    for (const auto& record : database) {
        cout << record << endl;
    }

    return 0;
}