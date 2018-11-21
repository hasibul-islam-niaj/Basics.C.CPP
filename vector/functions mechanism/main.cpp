#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> data;

    data.push_back(100);
    data.push_back(153);
    data.push_back(120);
    data.push_back(574);
    data.push_back(476);

    cout<<"first data: "<<data.front()<<endl;
    cout<<"last data: "<<data.back()<<endl;

    cout<<"all: ";
    for (int i = 0; i<data.size(); i++){
        cout<<data[i]<<" ";
    }

    data.insert(data.begin()+2, 102);

    cout<<"\nall: ";
    for (vector<int>::iterator i = data.begin(); i != data.end(); i++){
        cout << *i <<" ";
    }

    data.at(2) = 118;

    cout<<"\nall: ";
    for (vector<int>::iterator i = data.begin(); i != data.end(); i++){
        cout << *i <<" ";
    }

    cout<<"\nmax size: "<<data.max_size()<<endl;
    cout<<"size: "<<data.size()<<endl;
    cout<<"Is emplty?: "<<data.empty()<<endl;

    data.clear();

    cout<<"Is Empty?: "<<data.empty();

    return 0;
}
