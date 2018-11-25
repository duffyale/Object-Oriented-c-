#include <iostream> 
#include <iomanip>
#include "Furniture.h"

using namespace std;

Furniture::Furniture(){
    
    cout << "Enter name: "; 
    cin >> namae;
}

 void Furniture::ReadDimentions(){ 
    cout << "Enter width: ";
    cin >> width; 
    cout << "Enter height: ";
    cin >> height; 
    cout << "Enter depth: ";
    cin >> depth; 
    if (width <= 0 || height <= 0 || depth <= 0 ){
        cout << "The value can not be less than 0";
    }
    cout << " "  << endl;
}

void Furniture::print(){
    cout << name << ":" << endl;
    cout << "Width = " << width << ", height = " << height << ", depth = " << depth << endl;  
}
