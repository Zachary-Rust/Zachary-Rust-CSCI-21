#include "pet.h"

Pet::Pet()
{
    name_ = "blank";
    species_ = 0;
    nueteredSpayed_ = false;
    talks_ = false;
}

Pet::Pet(string name, int species, bool neutered_spayed, bool talks)
{
    name_ = name;
    species_ = species;
    neutered_spayed_ = neutered_spayed_;
    talks_ = talks;
}

void Pet::SetName(string name)
{
    name_ = name;
}

string Pet::GetName()
{
    return name_;
}

void Pet::SetSpecies(int species)
{
    species_ = species;
}

int Pet::GetSpecies()
{
    return species_;
}

void Pet::SetNeuteredSpayed(bool neutered_spayed)
{
    neutered_spayed_ = neutered_spayed;
}

bool Pet::GetNeuteredSpayed()
{
    return neutered_spayed_;
}

void Pet::SetTalks(bool talks)
{
    talks_ = talks;
}

bool Pet::GetTalks()
{
    return talks_;
}

virtual Pet::Print()
{
    
}