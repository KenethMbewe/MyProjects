#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {

class Square {
private:
    float side;

public:
    // default constructor
    Square();  
     // overloaded constructor               
    Square(float s);   
    // destructor
       
    ~Square();                
    void setSide(float s);
    float getSide() const;
};

}

#endif