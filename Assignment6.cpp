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
#include <vector>
#include <string>

using namespace std;

void printMap(map<string,int> const& m){
    for (auto & i : m)
        cout << i.first << " is " << i.second << " years old.\n";
}

void printVector(vector<string> const& v){
    for (auto & i : v)
        cout << i << endl;
}

void deleteKeys(map<string,int> &m){
    cout << endl;
    vector<string> toBeDeleted;
    for (auto & i : m) {
        if (i.first.back() == 'a') {
            cout << "Deleting " << i.first << " from Associative Array..." << endl;
            toBeDeleted.emplace_back(i.first);
        }
    }
    for (auto & i : toBeDeleted)
        m.erase(i);
}

void deleteIndexes(vector<string> &v){
    cout << endl;
    vector<string>::iterator it;
    for (it = v.begin(); it != v.end(); ++it ){
        if (it->back() == 'a'){
            cout << "Deleting " << *it << " from Dynamic Array..." << endl;
            v.erase(it);
        }
    }
    cout << "Deleting Vanessa from Dynamic Array..." << endl;
    v.pop_back(); // deletes "Vanessa" because other strategies didn't work like in Python & Ruby
}


// to sort by values instead of keys -- https://stackoverflow.com/questions/5056645/sorting-stdmap-using-value
template<typename A, typename B>
std::pair<B,A> flip_pair(const std::pair<A,B> &p)
{
    return std::pair<B,A>(p.second, p.first);
}

template<typename A, typename B>
std::multimap<B,A> flip_map(const std::map<A,B> &src)
{
    std::multimap<B,A> dst;
    std::transform(src.begin(), src.end(), std::inserter(dst, dst.begin()),
                   flip_pair<A,B>);
    return dst;
}

void printSortedMap(multimap<int,string> const& m){
    for (auto & i : m)
        cout << i.second << " is " << i.first << " years old.\n";
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
    cppMap.emplace("Lisa",21);              // ends with a
    cppMap.emplace("Lauren",32);
    cppMap.emplace("Samantha",44);          // ends with a
    cppMap.emplace("Alexis",54);
    cppMap.emplace("Jennifer",63);
    cppMap.emplace("Miranda",27);           // ends with a
    cppMap.emplace("Elizabeth",38);
    cppMap.emplace("Mary",49);
    cppMap.emplace("Julia",42);             // ends with a
    cppMap.emplace("Vanessa",36);           // ends with a

    cppVector.emplace_back("Lisa");         // ends with a
    cppVector.emplace_back("Lauren");
    cppVector.emplace_back("Samantha");     // ends with a
    cppVector.emplace_back("Alexis");
    cppVector.emplace_back("Jennifer");
    cppVector.emplace_back("Miranda");      // ends with a
    cppVector.emplace_back("Elizabeth");
    cppVector.emplace_back("Mary");
    cppVector.emplace_back("Julia");        // ends with a
    cppVector.emplace_back("Vanessa");      // ends with a

    cout << "\nUpdated C++ Map:" << endl;
    printMap(cppMap);
    cout << "\nUpdated C++ Vector:" << endl;
    printVector(cppVector);

    deleteKeys(cppMap);
    deleteIndexes(cppVector);
    cout << "\nC++ Map After Delete:" << endl;
    printMap(cppMap);
    cout << "\nC++ Vector After Delete:" << endl;
    printVector(cppVector);

    cout << "\nSorted C++ Map (Key):" << endl;
    printMap(cppMap);
    cout << "\nSorted C++ Map (Value):" << endl;
    printSortedMap(flip_map(cppMap));
    cout << "\nSorted C++ Vector:" << endl;
    sort(cppVector.begin(), cppVector.end());
    printVector(cppVector);
}