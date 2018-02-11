#include "food_item.h"

food_item()
{
    name_ = "fooditem";
    value_ = 0;
    calories_ = 0;
    unit_of_measure_ = "nonits";
    units_ = 0;
}

food_item(string name, unsigned int value, unsigned int calories, string unit_of_measure, double units)
{
    name_ = name;
    value_ = value;
    calories_ = calories;
    unit_of_measure_ = unit_of_measure;
    units_ = units;
}

~food_item()
{
    
}

void food_item::SetCalories(unsigned int calories)
{
    calories_ = calories;
}

unsigned int food_item::GetCalories()
{
    return calories_;
}

void food_item::SetUnitOfMeasure(string measure)
{
    unit_of_measure_ = measure;
}

string food_item::GetUnitOfMeasure()
{
    return unit_of_measure_;
}

void food_item::SetUnits(double units)
{
    units_ = units;
}

double food_item::GetUnit()
{
    return units_;
}

string food_item::ToString()
{
    stringstream ss;
    string output;
    
    ss << name_;
    ss << ", $";
    ss << value_;
    ss << ", ";
    ss << units_;
    ss << ' ';
    ss << unit_of_measure_;
    ss << ", ";
    ss << calories_;
    ss << ' ';
    ss << "calories";
    
    ss >> output;
}