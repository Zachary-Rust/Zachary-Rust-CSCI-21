#include "magic_item.h"

magic_item()
{
    name_ = "magicitem";
    value_ = 0;
    description_ = "no description";
    mana_required_ = 0;
}

magic_item(string name, unsigned int value, string description, unsigned int mana_required)
{
    name_ = name;
    value_ = value;
    description_ = description;
    mana_required_ = mana_required;
}

~magic_item()
{
    
}

void magic_item::SetDescription(string description)
{
    description_ = description;
}

string magic_item::GetDescription()
{
    return description_;
}

void magic_item::SetManaRequired(unsigned int mana_required)
{
    mana_required_ = mana_required;
}

unsigned int magic_item::GetManaRequired()
{
    return mana_required_;
}

string magic_item::ToString()
{
    stringstream ss;
    string output;
    
    ss << name_;
    ss << ", $";
    ss << value_;
    ss << ", ";
    ss << description_;
    ss << ", requires ";
    ss << mana_required_;
    ss << " mana";
    
    ss >> output;
    
    return output;
}