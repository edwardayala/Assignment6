// Assignment 6: Exploring Languages with Associative Arrays, Dynamic Lists, and Iteration
// Edward Ayala | Braxton Brown | Suvaik Patel
// Create Map & Dynamic List
// Write function to iterate over list and output contents (Print function)
// Print after adding 10 items to each collection
// Print again after adding another 10 items to each collection
// Print a final time after deleted 5 specific items from each collection
// Add function to sort remaining data in each collection
// Print sorted data

// C++ Associative Array = Map
// C++ Dynamic Array = Vector (many other implementations)

#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){
    map<string, int> cppMap {
            {"Bob", 34},
            {"John", 26},
            {"Steve", 30},
            {"Frank", 43},
            {"Peter", 52},
            {"Albert", 20},
            {"Jim", 65},
            {"Alan", 85},
            {"James", 41},
            {"Bill", 36}
    };

    map<string, int>::iterator i;
    cout << "C++ Map:" << endl;
    for (auto i = cppMap.begin(); i != cppMap.end(); i++)
        cout << i->first << " is " << i->second << " years old.\n";
}