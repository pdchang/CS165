#include <iostream>
#include "Box.hpp"
using namespace std;

int main()
{
void boxSort(Box array[], int size);
void showArray(Box array[], int size);
    
    const int size = 7;
    
    
    Box box1(2,3,1);
    Box box2(1,1,1);
    Box box3(5,2,6);
    Box box4(9,1,3);
    Box box5(1.592,4.295,12.33);
    Box box6(1.52,6.53,2.4);
    Box box7(.01,.50,.91);
    
    Box box[size] = {box1, box2, box3, box4, box5, box6, box7};
    
    showArray(box, size);
    
    boxSort(box, size);
    
    showArray(box,size);
    
    
    return 0;
}

void showArray(Box array[], int size)
{
    
    for (int i = 0; i < size; i++)
        cout << array[i].getVolume() << " " << endl;
    cout << endl;
}
