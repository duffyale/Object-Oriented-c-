
#include <iostream> 
#include <string> 
#include "Furniture.cpp" //Furniture source file
#include "Table.cpp" //Table source file 
#include "Bed.cpp"

using namespace std;


int main(){ 
    cout << "working" << endl;
    cout << " " << endl;
    
    cout << "Creating table..." << endl;

    //prompt user for name table
    //Furniture asknamefortable;
    //prompt user for type of wood 
    Table asktype;
    //prompt user for dimentions 
    asktype.ReadDimentions();

    cout << "Creating bed..." << endl; 
    //prompt user for name for bed
    //Furniture asknameforbed;
    //prompt user for the name of bed 
    Bed asksize;
    //prompt user for dimentiosn 
    asksize.ReadDimentions();

cout << "Printing objects..." << endl;
cout << " " << endl;

    
    
    //Print
    asktype.print();
    asktype.Print();
    asksize.print();
    asksize.Print();
    
    
    
}