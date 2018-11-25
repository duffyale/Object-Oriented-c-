#ifndef Furniture_h 
#define Furniture_h

using namespace std;

class Furniture { 
private: 

    float width; 
    float height; 
    float depth; 
    std::string name; 

public: 

    //constructor 
    Furniture(); 
    void ReadDimentions();
    void print();

};

#endif