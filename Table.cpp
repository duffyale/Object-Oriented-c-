#include <iostream> 
#include "Table.h"

using namespace std; 

Table::Table(){ 
    cout << "Enter wood type (Pine, Oak): "; 
    cin >> wood; 
    if (wood == "Pine" || wood == "Oak"){
    
    }else{
        cout << "Invalid Wood type" << endl;
}
}

void Table::Print(){  
    cout << wood << " wood" << endl;
}