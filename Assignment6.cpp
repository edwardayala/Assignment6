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

void printMap(map<string,int> const& m){
    for (auto & i : m)
        cout << i.first << " is " << i.second << " years old.\n";
}

void printVector(vector<string> const& v){
    for (auto & i : v)
        cout << i << endl;
}

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
//    map<string, int>::iterator i;

    vector<string> cppVector;
    cppVector.emplace_back("Bob");
    cppVector.emplace_back("John");
    cppVector.emplace_back("Steve");
    cppVector.emplace_back("Frank");
    cppVector.emplace_back("Peter");
    cppVector.emplace_back("Albert");
    cppVector.emplace_back("Jim");
    cppVector.emplace_back("Alan");
    cppVector.emplace_back("James");
    cppVector.emplace_back("Bill");

    cout << "\nC++ Map:" << endl;
    printMap(cppMap);
    cout << "\nC++ Vector:" << endl;
    printVector(cppVector);

    // Map.insert(pair<string, int>("Lisa", 21)) == Map.emplace("Lisa",21)
    cppMap.emplace("Lisa",21);        // ends with a
    cppMap.emplace("Lauren",32);
    cppMap.emplace("Samantha",44);    // ends with a
    cppMap.emplace("Alexis",54);
    cppMap.emplace("Jennifer",63);
    cppMap.emplace("Miranda",27);     // ends with a
    cppMap.emplace("Elizabeth",38);
    cppMap.emplace("Mary",49);
    cppMap.emplace("Julia",42);       // ends with a
    cppMap.emplace("Vanessa",36);     // ends with a

    cppVector.emplace_back("Lisa");
    cppVector.emplace_back("Lauren");
    cppVector.emplace_back("Samantha");
    cppVector.emplace_back("Alexis");
    cppVector.emplace_back("Jennifer");
    cppVector.emplace_back("Miranda");
    cppVector.emplace_back("Elizabeth");
    cppVector.emplace_back("Mary");
    cppVector.emplace_back("Julia");
    cppVector.emplace_back("Vanessa");

    cout << "\nUpdated C++ Map:" << endl;
    printMap(cppMap);
    cout << "\nUpdated C++ Vector:" << endl;
    printVector(cppVector);

}