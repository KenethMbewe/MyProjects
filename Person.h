#pragma once
#include <string>
using namespace std;

class Person{

    public:
    Person();
    Person (float newWeight);
    Person(string firstname,float weight);
    ~Person();
    float operator + (const Person& otherPerson);
    
    bool operator==(const Person& other)const;
    bool operator!=(const Person& other)const;

    bool operator<(const Person& other)const;
    bool operator>(const Person& other)const;




    private:
    float mWeight;
    string mFirstName;
    int mAge;

};