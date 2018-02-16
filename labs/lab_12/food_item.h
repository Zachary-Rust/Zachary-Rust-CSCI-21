/*
 * Name        : food_item.h
 * Author      : Zachary Rust
 * Description : Class Header File
 */

#ifndef LAB_H
#define LAB_H

#include "food_item.cpp"
#include <string>
#include <sstream>

using namespace std;
class food_item: public Item{
    private:
    unsigned int calories_;
    string unit_of_measure_;
    double units_;
    
    public:
    food_item();
    food_item(string name, unsigned int value, unsigned int calories, string unit_of_measure, double units);
    virtual ~food_item();
    
    void SetCalories(unsigned int calories);
    unsigned int GetCalories();
    
    void SetUnitOfMeasure(string measure);
    string GetUnitOfMeasure();
    
    void SetUnits(double units);
    double GetUnits();
    
    string ToString();
}

#endif