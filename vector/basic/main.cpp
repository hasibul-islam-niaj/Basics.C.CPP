//
// Created by hasibul on 10/7/18.
//

/**
 * size() ==> is used to find out length
 * push_back(value) ==> is used to push data in vector
 * insert(index, value) ==> is used to insert a value in parameterized index (position)
 * at(index) ==> get the value from parameterized index
 * begin() ==> target the zero index
 * end() ==> find out size of vector element
 * erase(index use begin() +/- ) ==> is used to remove element from parameterized index
 * clear() ==> used to remove all elements from vector
 * empty() ==> return boolean values for vector empty or not
 */

#include <iostream>
#include <string>
#include <vector>
#include <cstdbool>

using namespace std;

int main() {
    vector<int> vector;

    vector.push_back(5);
    vector.insert(vector.begin(), 6);
    vector.push_back(8);
    vector.push_back(2);
    vector.push_back(4);
    vector.push_back(3);

    cout<< "Vector: ";
    for (int i=0; i<vector.size(); i++) {
        cout << vector.at(i) << " ";
    }

    vector.erase(vector.end()-1);

    cout << endl << "Vector: ";
    for (int i=0; i<vector.size(); i++){
        cout<< vector.at(i) << " ";
    }

    vector.clear();

    cout << endl << "is vector empty? " << vector.empty();

    return 0;
}