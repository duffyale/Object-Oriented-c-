#include <iostream> 
#include "Bed.h"

using namespace std; 

Bed::Bed(){ 
    // takes the unique name of the bed as the first argument and pass directly to the constructor fo the parent class 
    cout << "Enter size (Twin, Full, Queen, King): ";
    cin >> size;
    if (size == "Twin" || size == "Full" || size == "Queen" || size == "King"){ 
    } else{
        cout << "Enter a valid Bed size" << endl;
    }

}

void Bed::Print(){
    cout << size << " size" << endl;
}