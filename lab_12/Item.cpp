#include "Item.h"

Item::Item()
{
    name_ = "item";
    value_ = 0;
}

Item::Item(string n, unsigned int v)
{
    name_ = n;
    value_ = v;
}

~Item()
{
    
}

void Item::SetName(string n)
{
    name_ = n;
}

string Item::GetName()
{
    return name_;
}

void Item::SetValue(unsigned int v)
{
    value_ = v;
}

string Item::GetValue()
{
    return value_;
}

string Item::ToString()
{
    string output;
    
    stringstream ss;
    
    ss << name_;
    ss << ", $";
    ss << value;
    
    ss >> output;
    
    return output;
}