#include <iostream>
#include "ValSet.hpp"
#include <iostream>
using namespace std;

int main()
{
    ValSet<char> mySet;
    mySet.add('A');
    mySet.add('A');
    mySet.add('A');
    mySet.add('j');
    mySet.add('&');
    mySet.remove('j');
    mySet.remove('g');
    mySet.add('#');
    int size = mySet.size();
    ValSet<char> mySet2 = mySet;
    bool check1 = mySet2.contains('&');
    bool check2 = mySet2.contains('j');
    bool check3 = mySet2.contains('w');
    bool check4 = mySet2.isEmpty();
    vector<char> vec = mySet.getAsVector();
    
    cout << "# of elements: " << size << endl;
    if (check1 == true){
        cout << "check1" << endl;
    }
    if (check2 == false){
        cout << "check2" << endl;
    }
    
    if (check3 == false){
        cout << "check3" << endl;
    }
    
    if (check4 == false){
        cout << "check4" << endl;
    }
    
    for (int i = 0; i < size; i++)
        cout << vec[i] << endl;
    return 0;
}
