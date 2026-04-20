#include "Person.h"

Person::Person(){
    mWeight = 0.0;
    mFirstName = "";
    mAge = 0;
}

Person::Person(float newWeight){
    mWeight = newWeight;
}

Person::Person(string firstName,float weight){
    mWeight = weight;
    mFirstName = firstName;
    mAge = 0;
}
Person::~Person(){

}

float Person::operator + (const Person& otherPerson){
    return mWeight + otherPerson.mWeight;

}

bool Person::operator==(const Person& other)const{
    return mFirstName == other.mFirstName;

}

bool Person::operator!=(const Person& other) const {
    return mFirstName != other.mFirstName;
}

bool Person::operator<(const Person& other)const{
    return mAge<other.mAge;
}

bool Person::operator>(const Person& other) const {
    return mAge > other.mAge;
}

Person::operator int()const{
    return mAge;
}

Person::operator string() const {
    return mFirstName;
}

Person::operator float() const {
    return mWeight;
}


